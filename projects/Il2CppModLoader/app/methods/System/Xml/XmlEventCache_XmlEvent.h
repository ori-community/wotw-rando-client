#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XmlEventCache_XmlEvent {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, InitEvent_1, (app::XmlEventCache_XmlEvent__Boxed * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type))
    IL2CPP_REGISTER_METHOD(0x0013C010, void, InitEvent_2, (app::XmlEventCache_XmlEvent__Boxed * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type, app::String * s1))
    IL2CPP_REGISTER_METHOD(0x001CFA50, void, InitEvent_3, (app::XmlEventCache_XmlEvent__Boxed * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type, app::String * s1, app::String * s2))
    IL2CPP_REGISTER_METHOD(0x001CFA60, void, InitEvent_4, (app::XmlEventCache_XmlEvent__Boxed * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type, app::String * s1, app::String * s2, app::String * s3))
    IL2CPP_REGISTER_METHOD(0x001CFA80, void, InitEvent_5, (app::XmlEventCache_XmlEvent__Boxed * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type, app::String * s1, app::String * s2, app::String * s3, app::Object * o))
    IL2CPP_REGISTER_METHOD(0x001CFAA0, void, InitEvent_6, (app::XmlEventCache_XmlEvent__Boxed * this_ptr, app::XmlEventCache_XmlEventType__Enum event_type, app::Object * o))
    IL2CPP_REGISTER_METHOD(0x0010E170, app::XmlEventCache_XmlEventType__Enum, get_EventType, (app::XmlEventCache_XmlEvent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C10, app::String *, get_String1, (app::XmlEventCache_XmlEvent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C20, app::String *, get_String2, (app::XmlEventCache_XmlEvent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C30, app::String *, get_String3, (app::XmlEventCache_XmlEvent__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C40, app::Object *, get_Object, (app::XmlEventCache_XmlEvent__Boxed * this_ptr))
}
