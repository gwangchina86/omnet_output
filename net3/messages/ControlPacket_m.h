//
// Generated file, do not edit! Created by nedtool 4.6 from messages/ControlPacket.msg.
//

#ifndef _CONTROLPACKET_M_H_
#define _CONTROLPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>messages/ControlPacket.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet ControlPacket
 * {
 *     double data;
 *     int flow_id;
 * }
 * </pre>
 */
class ControlPacket : public ::cPacket
{
  protected:
    double data_var;
    int flow_id_var;

  private:
    void copy(const ControlPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ControlPacket&);

  public:
    ControlPacket(const char *name=NULL, int kind=0);
    ControlPacket(const ControlPacket& other);
    virtual ~ControlPacket();
    ControlPacket& operator=(const ControlPacket& other);
    virtual ControlPacket *dup() const {return new ControlPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual double getData() const;
    virtual void setData(double data);
    virtual int getFlow_id() const;
    virtual void setFlow_id(int flow_id);
};

inline void doPacking(cCommBuffer *b, ControlPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ControlPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _CONTROLPACKET_M_H_

