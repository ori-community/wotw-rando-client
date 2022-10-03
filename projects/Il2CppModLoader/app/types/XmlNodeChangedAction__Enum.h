#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNodeChangedAction__Enum {
        namespace {
            app::XmlNodeChangedAction__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlNodeChangedAction__Enum__Class** type_info = &type_info_ref;
        inline app::XmlNodeChangedAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeChangedAction__Enum__Class>(type_info, "System.Xml", "XmlNodeChangedAction");
        }
        inline app::XmlNodeChangedAction__Enum* create() {
            return il2cpp::create_object<app::XmlNodeChangedAction__Enum>(get_class());
        }
    } // namespace XmlNodeChangedAction__Enum
} // namespace app::classes::types
