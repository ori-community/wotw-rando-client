#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlReadMode__Enum {
        namespace {
            app::XmlReadMode__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlReadMode__Enum__Class** type_info = &type_info_ref;
        inline app::XmlReadMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlReadMode__Enum__Class>(type_info, "System.Data", "XmlReadMode");
        }
        inline app::XmlReadMode__Enum* create() {
            return il2cpp::create_object<app::XmlReadMode__Enum>(get_class());
        }
    } // namespace XmlReadMode__Enum
} // namespace app::classes::types
