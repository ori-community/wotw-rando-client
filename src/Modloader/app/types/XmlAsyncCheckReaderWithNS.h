#pragma once
#include <Modloader/app/structs/XmlAsyncCheckReaderWithNS.h>
#include <Modloader/app/structs/XmlAsyncCheckReaderWithNS__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithNS {
        inline app::XmlAsyncCheckReaderWithNS__Class** type_info() {
            static app::XmlAsyncCheckReaderWithNS__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAsyncCheckReaderWithNS__Class**)(modloader::win::memory::resolve_rva(0x04731910));
            }
            return cache;
        }
        inline app::XmlAsyncCheckReaderWithNS__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithNS__Class>(type_info(), "System.Xml", "XmlAsyncCheckReaderWithNS");
        }
        inline app::XmlAsyncCheckReaderWithNS* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithNS>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithNS
} // namespace app::classes::types
