#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlWriter.h>
#include <Modloader/app/structs/XmlWriterSettings.h>

namespace app::classes::System::Xml::XmlWriter {
    IL2CPP_REGISTER_METHOD(0x01FD5540, void, WriteStartElement, app::XmlWriter* this_ptr, app::String* local_name, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x01FD5570, void, WriteAttributeString_1, app::XmlWriter* this_ptr, app::String* local_name, app::String* ns, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01FD55E0, void, WriteAttributeString_2, app::XmlWriter* this_ptr, app::String* local_name, app::String* value)
    IL2CPP_REGISTER_METHOD(
        0x01FD5650,
        void,
        WriteAttributeString_3,
        app::XmlWriter* this_ptr,
        app::String* prefix,
        app::String* local_name,
        app::String* ns,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(0x01FD56A0, void, WriteBinHex, app::XmlWriter* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Close, app::XmlWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD56D0, void, WriteValue, app::XmlWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01FD56F0, void, WriteAttributes, app::XmlWriter* this_ptr, app::XmlReader* reader, bool defattr)
    IL2CPP_REGISTER_METHOD(0x01FD5A80, void, WriteNode, app::XmlWriter* this_ptr, app::XmlReader* reader, bool defattr)
    IL2CPP_REGISTER_METHOD(0x01FD5F90, void, WriteElementString, app::XmlWriter* this_ptr, app::String* local_name, app::String* ns, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01FD6000, void, Dispose_1, app::XmlWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FD6020, void, Dispose_2, app::XmlWriter* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01FD6060, app::XmlWriter*, Create_1, app::Stream* output, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01FD61D0, app::XmlWriter*, Create_2, app::TextWriter* output, app::XmlWriterSettings* settings)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XmlWriter* this_ptr)
} // namespace app::classes::System::Xml::XmlWriter
