#include <inttypes.h>

class KegboardPacket {
  public:
   KegboardPacket();
   void SetType(int type) {m_type = type;}
   void AddTag(int tag, int buflen, char *buf);
   void Reset();
   void Print();
   uint16_t GenCrc();
  private:
   int m_type;
   int m_len;
   char m_payload[128];
};
