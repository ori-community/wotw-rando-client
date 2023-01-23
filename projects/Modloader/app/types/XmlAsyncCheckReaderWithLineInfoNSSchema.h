#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlAsyncCheckReaderWithLineInfoNSSchema__Class.h>
#include <Modloader/app/structs/XmlAsyncCheckReaderWithLineInfoNSSchema.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithLineInfoNSSchema {
        inline app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class** type_info = (app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class**)(modloader::win::memory::resolve_rva(0x04760D18));
        inline app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class>(type_info, "System.Xml", "XmlAsyncCheckReaderWithLineInfoNSSchema");
        }
        inline app::XmlAsyncCheckReaderWithLineInfoNSSchema* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithLineInfoNSSchema>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithLineInfoNSSchema
} // namespace app::classes::types
