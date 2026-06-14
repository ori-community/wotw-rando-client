#pragma once
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/XmlSpace__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSpace__Enum {
        inline app::XmlSpace__Enum__Class** type_info() {
            static app::XmlSpace__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSpace__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlSpace__Enum__Class>(type_info(), "System.Xml", "XmlSpace");
        }
        inline app::XmlSpace__Enum* create() {
            return il2cpp::create_object<app::XmlSpace__Enum>(get_class());
        }
    } // namespace XmlSpace__Enum
} // namespace app::classes::types
