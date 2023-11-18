#pragma once
#include <Modloader/app/structs/XmlAsyncCheckReaderWithLineInfoNSSchema.h>
#include <Modloader/app/structs/XmlAsyncCheckReaderWithLineInfoNSSchema__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithLineInfoNSSchema {
        inline app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class** type_info() {
            static app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class**)(modloader::win::memory::resolve_rva(0x04760D18));
            }
            return cache;
        }
        inline app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class>(type_info(), "System.Xml", "XmlAsyncCheckReaderWithLineInfoNSSchema");
        }
        inline app::XmlAsyncCheckReaderWithLineInfoNSSchema* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithLineInfoNSSchema>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithLineInfoNSSchema
} // namespace app::classes::types
