#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWriteMode__Enum {
        namespace {
            app::XmlWriteMode__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlWriteMode__Enum__Class** type_info = &type_info_ref;
        inline app::XmlWriteMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlWriteMode__Enum__Class>(type_info, "System.Data", "XmlWriteMode");
        }
        inline app::XmlWriteMode__Enum* create() {
            return il2cpp::create_object<app::XmlWriteMode__Enum>(get_class());
        }
    } // namespace XmlWriteMode__Enum
} // namespace app::classes::types
