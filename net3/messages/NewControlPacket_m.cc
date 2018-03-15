//
// Generated file, do not edit! Created by nedtool 4.6 from messages/NewControlPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "NewControlPacket_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

Register_Class(NewControlPacket);

NewControlPacket::NewControlPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    data_arraysize = 0;
    this->data_var = 0;
    flow_set_arraysize = 0;
    this->flow_set_var = 0;
}

NewControlPacket::NewControlPacket(const NewControlPacket& other) : ::cPacket(other)
{
    data_arraysize = 0;
    this->data_var = 0;
    flow_set_arraysize = 0;
    this->flow_set_var = 0;
    copy(other);
}

NewControlPacket::~NewControlPacket()
{
    delete [] data_var;
    delete [] flow_set_var;
}

NewControlPacket& NewControlPacket::operator=(const NewControlPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void NewControlPacket::copy(const NewControlPacket& other)
{
    delete [] this->data_var;
    this->data_var = (other.data_arraysize==0) ? NULL : new double[other.data_arraysize];
    data_arraysize = other.data_arraysize;
    for (unsigned int i=0; i<data_arraysize; i++)
        this->data_var[i] = other.data_var[i];
    delete [] this->flow_set_var;
    this->flow_set_var = (other.flow_set_arraysize==0) ? NULL : new int[other.flow_set_arraysize];
    flow_set_arraysize = other.flow_set_arraysize;
    for (unsigned int i=0; i<flow_set_arraysize; i++)
        this->flow_set_var[i] = other.flow_set_var[i];
}

void NewControlPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    b->pack(data_arraysize);
    doPacking(b,this->data_var,data_arraysize);
    b->pack(flow_set_arraysize);
    doPacking(b,this->flow_set_var,flow_set_arraysize);
}

void NewControlPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    delete [] this->data_var;
    b->unpack(data_arraysize);
    if (data_arraysize==0) {
        this->data_var = 0;
    } else {
        this->data_var = new double[data_arraysize];
        doUnpacking(b,this->data_var,data_arraysize);
    }
    delete [] this->flow_set_var;
    b->unpack(flow_set_arraysize);
    if (flow_set_arraysize==0) {
        this->flow_set_var = 0;
    } else {
        this->flow_set_var = new int[flow_set_arraysize];
        doUnpacking(b,this->flow_set_var,flow_set_arraysize);
    }
}

void NewControlPacket::setDataArraySize(unsigned int size)
{
    double *data_var2 = (size==0) ? NULL : new double[size];
    unsigned int sz = data_arraysize < size ? data_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        data_var2[i] = this->data_var[i];
    for (unsigned int i=sz; i<size; i++)
        data_var2[i] = 0;
    data_arraysize = size;
    delete [] this->data_var;
    this->data_var = data_var2;
}

unsigned int NewControlPacket::getDataArraySize() const
{
    return data_arraysize;
}

double NewControlPacket::getData(unsigned int k) const
{
    if (k>=data_arraysize) throw cRuntimeError("Array of size %d indexed by %d", data_arraysize, k);
    return data_var[k];
}

void NewControlPacket::setData(unsigned int k, double data)
{
    if (k>=data_arraysize) throw cRuntimeError("Array of size %d indexed by %d", data_arraysize, k);
    this->data_var[k] = data;
}

void NewControlPacket::setFlow_setArraySize(unsigned int size)
{
    int *flow_set_var2 = (size==0) ? NULL : new int[size];
    unsigned int sz = flow_set_arraysize < size ? flow_set_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        flow_set_var2[i] = this->flow_set_var[i];
    for (unsigned int i=sz; i<size; i++)
        flow_set_var2[i] = 0;
    flow_set_arraysize = size;
    delete [] this->flow_set_var;
    this->flow_set_var = flow_set_var2;
}

unsigned int NewControlPacket::getFlow_setArraySize() const
{
    return flow_set_arraysize;
}

int NewControlPacket::getFlow_set(unsigned int k) const
{
    if (k>=flow_set_arraysize) throw cRuntimeError("Array of size %d indexed by %d", flow_set_arraysize, k);
    return flow_set_var[k];
}

void NewControlPacket::setFlow_set(unsigned int k, int flow_set)
{
    if (k>=flow_set_arraysize) throw cRuntimeError("Array of size %d indexed by %d", flow_set_arraysize, k);
    this->flow_set_var[k] = flow_set;
}

class NewControlPacketDescriptor : public cClassDescriptor
{
  public:
    NewControlPacketDescriptor();
    virtual ~NewControlPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(NewControlPacketDescriptor);

NewControlPacketDescriptor::NewControlPacketDescriptor() : cClassDescriptor("NewControlPacket", "cPacket")
{
}

NewControlPacketDescriptor::~NewControlPacketDescriptor()
{
}

bool NewControlPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NewControlPacket *>(obj)!=NULL;
}

const char *NewControlPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NewControlPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int NewControlPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *NewControlPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "data",
        "flow_set",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int NewControlPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "data")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "flow_set")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NewControlPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *NewControlPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int NewControlPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NewControlPacket *pp = (NewControlPacket *)object; (void)pp;
    switch (field) {
        case 0: return pp->getDataArraySize();
        case 1: return pp->getFlow_setArraySize();
        default: return 0;
    }
}

std::string NewControlPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NewControlPacket *pp = (NewControlPacket *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getData(i));
        case 1: return long2string(pp->getFlow_set(i));
        default: return "";
    }
}

bool NewControlPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NewControlPacket *pp = (NewControlPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setData(i,string2double(value)); return true;
        case 1: pp->setFlow_set(i,string2long(value)); return true;
        default: return false;
    }
}

const char *NewControlPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *NewControlPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NewControlPacket *pp = (NewControlPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


