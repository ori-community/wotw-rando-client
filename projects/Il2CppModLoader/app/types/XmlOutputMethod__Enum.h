#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlOutputMethod__Enum {
        namespace {
            app::XmlOutputMethod__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlOutputMethod__Enum__Class** type_info = &type_info_ref;
        inline app::XmlOutputMethod__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlOutputMethod__Enum__Class>(type_info, "System.Xml", "XmlOutputMethod");
        }
        inline app::XmlOutputMethod__Enum* create() {
            return il2cpp::create_object<app::XmlOutputMethod__Enum>(get_class());
        }
    } // namespace XmlOutputMethod__Enum
} // namespace app::classes::types
