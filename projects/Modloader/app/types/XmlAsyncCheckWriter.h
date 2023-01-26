#pragma once
#include <Modloader/app/structs/XmlAsyncCheckWriter.h>
#include <Modloader/app/structs/XmlAsyncCheckWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckWriter {
        inline app::XmlAsyncCheckWriter__Class** type_info() {
            static app::XmlAsyncCheckWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAsyncCheckWriter__Class**)(modloader::win::memory::resolve_rva(0x0472B048));
            }
            return cache;
        }
        inline app::XmlAsyncCheckWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckWriter__Class>(type_info(), "System.Xml", "XmlAsyncCheckWriter");
        }
        inline app::XmlAsyncCheckWriter* create() {
            return il2cpp::create_object<app::XmlAsyncCheckWriter>(get_class());
        }
    } // namespace XmlAsyncCheckWriter
} // namespace app::classes::types
