#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::XmlSerializationWriterInterpreter_CallbackInfo * this_ptr, app::XmlSerializationWriterInterpreter * swi, app::XmlTypeMapping * type_map))
    IL2CPP_REGISTER_METHOD(0x01949E30, void, WriteObject, (app::XmlSerializationWriterInterpreter_CallbackInfo * this_ptr, app::Object * ob))
    IL2CPP_REGISTER_METHODINFO(0x04758CB0, XmlSerializationWriterInterpreter_CallbackInfo_WriteObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01949E90, void, WriteEnum, (app::XmlSerializationWriterInterpreter_CallbackInfo * this_ptr, app::Object * ob))
    IL2CPP_REGISTER_METHODINFO(0x04710250, XmlSerializationWriterInterpreter_CallbackInfo_WriteEnum__MethodInfo)
}
