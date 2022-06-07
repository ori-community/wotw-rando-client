#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x010415E0, void, ctor, (app::XmlSerializationReaderInterpreter_FixupCallbackInfo * this_ptr, app::XmlSerializationReaderInterpreter * sri, app::ClassMap * map, bool is_value_list))
    IL2CPP_REGISTER_METHOD(0x025B9EE0, void, FixupMembers, (app::XmlSerializationReaderInterpreter_FixupCallbackInfo * this_ptr, app::Object * fixup))
    IL2CPP_REGISTER_METHODINFO(0x047340A0, XmlSerializationReaderInterpreter_FixupCallbackInfo_FixupMembers__MethodInfo)
}
