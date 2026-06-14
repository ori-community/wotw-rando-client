#pragma once
#include <Modloader/app/structs/XmlAsyncCheckReader.h>
#include <Modloader/app/structs/XmlAsyncCheckReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReader {
        inline app::XmlAsyncCheckReader__Class** type_info() {
            static app::XmlAsyncCheckReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAsyncCheckReader__Class**)(modloader::win::memory::resolve_rva(0x047035E0));
            }
            return cache;
        }
        inline app::XmlAsyncCheckReader__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReader__Class>(type_info(), "System.Xml", "XmlAsyncCheckReader");
        }
        inline app::XmlAsyncCheckReader* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReader>(get_class());
        }
    } // namespace XmlAsyncCheckReader
} // namespace app::classes::types
