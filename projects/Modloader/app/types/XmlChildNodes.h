#pragma once
#include <Modloader/app/structs/XmlChildNodes.h>
#include <Modloader/app/structs/XmlChildNodes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlChildNodes {
        inline app::XmlChildNodes__Class** type_info() {
            static app::XmlChildNodes__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlChildNodes__Class**)(modloader::win::memory::resolve_rva(0x04769768));
            }
            return cache;
        }
        inline app::XmlChildNodes__Class* get_class() {
            return il2cpp::get_class<app::XmlChildNodes__Class>(type_info(), "System.Xml", "XmlChildNodes");
        }
        inline app::XmlChildNodes* create() {
            return il2cpp::create_object<app::XmlChildNodes>(get_class());
        }
    } // namespace XmlChildNodes
} // namespace app::classes::types
