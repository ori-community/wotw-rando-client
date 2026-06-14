#pragma once
#include <Modloader/app/structs/XmlNodeChangedAction__Enum.h>
#include <Modloader/app/structs/XmlNodeChangedAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeChangedAction__Enum {
        inline app::XmlNodeChangedAction__Enum__Class** type_info() {
            static app::XmlNodeChangedAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlNodeChangedAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlNodeChangedAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeChangedAction__Enum__Class>(type_info(), "System.Xml", "XmlNodeChangedAction");
        }
        inline app::XmlNodeChangedAction__Enum* create() {
            return il2cpp::create_object<app::XmlNodeChangedAction__Enum>(get_class());
        }
    } // namespace XmlNodeChangedAction__Enum
} // namespace app::classes::types
