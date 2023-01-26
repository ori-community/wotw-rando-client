#pragma once
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#include <Modloader/app/structs/XmlNodeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeType__Enum {
        inline app::XmlNodeType__Enum__Class** type_info() {
            static app::XmlNodeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNodeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473C080));
            }
            return cache;
        }
        inline app::XmlNodeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeType__Enum__Class>(type_info(), "System.Xml", "XmlNodeType");
        }
        inline app::XmlNodeType__Enum* create() {
            return il2cpp::create_object<app::XmlNodeType__Enum>(get_class());
        }
    } // namespace XmlNodeType__Enum
} // namespace app::classes::types
