//
// Generated file, do not edit! Created by opp_msgtool 6.0 from ddc/message/ResponseArrivalRate.msg.
//

#ifndef __INET_RESPONSEARRIVALRATE_M_H
#define __INET_RESPONSEARRIVALRATE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif


namespace inet {

class ResponseArrivalRate;

}  // namespace inet

#include "inet/common/packet/Packet_m.h" // import inet.common.packet.Packet


namespace inet {

/**
 * Class generated from <tt>ddc/message/ResponseArrivalRate.msg:12</tt> by opp_msgtool.
 * <pre>
 * class ResponseArrivalRate extends inet::Packet
 * {
 *     double arrival_rate;
 * }
 * </pre>
 */
class ResponseArrivalRate : public ::inet::Packet
{
  protected:
    double arrival_rate = 0;

  private:
    void copy(const ResponseArrivalRate& other);

  protected:
    bool operator==(const ResponseArrivalRate&) = delete;

  public:
    ResponseArrivalRate(const char *name=nullptr);
    ResponseArrivalRate(const ResponseArrivalRate& other);
    virtual ~ResponseArrivalRate();
    ResponseArrivalRate& operator=(const ResponseArrivalRate& other);
    virtual ResponseArrivalRate *dup() const override {return new ResponseArrivalRate(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual double getArrival_rate() const;
    virtual void setArrival_rate(double arrival_rate);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const ResponseArrivalRate& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, ResponseArrivalRate& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::ResponseArrivalRate *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::ResponseArrivalRate*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_RESPONSEARRIVALRATE_M_H

