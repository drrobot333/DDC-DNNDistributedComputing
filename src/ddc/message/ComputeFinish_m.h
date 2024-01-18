//
// Generated file, do not edit! Created by opp_msgtool 6.0 from ddc/message/ComputeFinish.msg.
//

#ifndef __INET_COMPUTEFINISH_M_H
#define __INET_COMPUTEFINISH_M_H

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

class ComputeFinish;

}  // namespace inet

#include "inet/common/packet/Packet_m.h" // import inet.common.packet.Packet

// cplusplus {{
#include "ddc/dnn/DNNOutput.h"
// }}


namespace inet {

/**
 * Class generated from <tt>ddc/message/ComputeFinish.msg:21</tt> by opp_msgtool.
 * <pre>
 * class ComputeFinish extends inet::Packet
 * {
 *     DNNOutput *dnn_output;
 * }
 * </pre>
 */
class ComputeFinish : public ::inet::Packet
{
  protected:
    DNNOutput * dnn_output = nullptr;

  private:
    void copy(const ComputeFinish& other);

  protected:
    bool operator==(const ComputeFinish&) = delete;

  public:
    ComputeFinish(const char *name=nullptr);
    ComputeFinish(const ComputeFinish& other);
    virtual ~ComputeFinish();
    ComputeFinish& operator=(const ComputeFinish& other);
    virtual ComputeFinish *dup() const override {return new ComputeFinish(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const DNNOutput * getDnn_output() const;
    virtual DNNOutput * getDnn_outputForUpdate() { return const_cast<DNNOutput *>(const_cast<ComputeFinish*>(this)->getDnn_output());}
    virtual void setDnn_output(DNNOutput * dnn_output);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const ComputeFinish& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, ComputeFinish& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

inline any_ptr toAnyPtr(const inet::DNNOutput *p) {if (auto obj = as_cObject(p)) return any_ptr(obj); else return any_ptr(p);}
template<> inline inet::DNNOutput *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::DNNOutput>(); }
template<> inline inet::ComputeFinish *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::ComputeFinish*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_COMPUTEFINISH_M_H

