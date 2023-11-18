#pragma once
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlReader {
        inline app::XmlReader__Class** type_info() {
            static app::XmlReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlReader__Class**)(modloader::win::memory::resolve_rva(0x047813E0));
            }
            return cache;
        }
        inline app::XmlReader__Class* get_class() {
            return il2cpp::get_class<app::XmlReader__Class>(type_info(), "System.Xml", "XmlReader");
        }
        inline app::XmlReader* create() {
            return il2cpp::create_object<app::XmlReader>(get_class());
        }
    } // namespace XmlReader
} // namespace app::classes::types
