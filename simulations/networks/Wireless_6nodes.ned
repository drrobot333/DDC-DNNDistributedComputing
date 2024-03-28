//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

package simulations.networks;

import inet.networklayer.configurator.ipv4.Ipv4NetworkConfigurator;
import inet.node.inet.StandardHost;
import inet.node.contract.INetworkNode;
import inet.linklayer.ethernet.EthernetInterface;
import ned.DatarateChannel;
import inet.node.ethernet.Eth100M;
import inet.node.ethernet.Eth1G;
import inet.node.ethernet.Eth10G;
import inet.physicallayer.wireless.common.contract.packe tlevel.IRadioMedium;
import inet.visualizer.contract.IIntegratedVisualizer;

network Wireless_6nodes
{
    submodules:
        visualizer: <default(firstAvailableOrEmpty("IntegratedCanvasVisualizer"))> like IIntegratedVisualizer if typename != "" {
            @display("p=50,50");
        }
        configurator: Ipv4NetworkConfigurator {
            @display("p=50,100");
        }
        radioMedium: <default("UnitDiskRadioMedium")> like IRadioMedium {
            @display("p=50,150");
        }
        node1: StandardHost  {
            @display("p=700,100");
        }
        node2: StandardHost  {
            @display("p=1300,100");
        }
        node3: StandardHost  {
            @display("p=600,300");
        }
        node4: StandardHost  {
            @display("p=1000,300");
        }
        node5: StandardHost  {
            @display("p=1400,300");
        }
        node6: StandardHost  {
            @display("p=1000,700");
        }
        controlplane: StandardHost {
            @display("p=400,200");
        }
        
	connections:
	    node1.ethg++ <--> Eth10G <--> node2.ethg++;
	    node1.ethg++ <--> Eth1G <--> node3.ethg++;
	    node1.ethg++ <--> Eth1G <--> node4.ethg++;
	    node2.ethg++ <--> Eth1G <--> node4.ethg++;
	    node2.ethg++ <--> Eth1G <--> node5.ethg++;
	    
	    controlplane.ethg++ <--> Eth1G <--> node1.ethg++;
	    controlplane.ethg++ <--> Eth1G <--> node2.ethg++;
	    controlplane.ethg++ <--> Eth1G <--> node3.ethg++;
	    controlplane.ethg++ <--> Eth1G <--> node4.ethg++;
	    controlplane.ethg++ <--> Eth1G <--> node5.ethg++;
	    controlplane.ethg++ <--> Eth1G <--> node6.ethg++;
	    node6.ethg++ <--> Eth1G <--> node3.ethg++;
	    node6.ethg++ <--> Eth1G <--> node4.ethg++;
	    node6.ethg++ <--> Eth1G <--> node5.ethg++;
        
}
