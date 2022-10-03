#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerticalWrapMode__Enum {
        namespace {
            app::VerticalWrapMode__Enum__Class* type_info_ref = nullptr;
        }
        app::VerticalWrapMode__Enum__Class** type_info = &type_info_ref;
        inline app::VerticalWrapMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::VerticalWrapMode__Enum__Class>(type_info, "UnityEngine", "VerticalWrapMode");
        }
        inline app::VerticalWrapMode__Enum* create() {
            return il2cpp::create_object<app::VerticalWrapMode__Enum>(get_class());
        }
    } // namespace VerticalWrapMode__Enum
} // namespace app::classes::types
