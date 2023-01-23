#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSerializationReaderInterpreter_ReaderCallbackInfo.h>
#include <Modloader/app/structs/XmlSerializationReaderInterpreter.h>
#include <Modloader/app/structs/XmlTypeMapping.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::XmlSerializationReaderInterpreter_ReaderCallbackInfo * this_ptr, app::XmlSerializationReaderInterpreter* sri, app::XmlTypeMapping* type_map))
    IL2CPP_REGISTER_METHOD(0x025B9F20, app::Object*, ReadObject, (app::XmlSerializationReaderInterpreter_ReaderCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780700, XmlSerializationReaderInterpreter_ReaderCallbackInfo_ReadObject__MethodInfo)
} // namespace app::classes::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo
