#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FogMode__Enum {
        namespace {
            app::FogMode__Enum__Class* type_info_ref = nullptr;
        }
        app::FogMode__Enum__Class** type_info = &type_info_ref;
        inline app::FogMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FogMode__Enum__Class>(type_info, "UnityEngine", "FogMode");
        }
        inline app::FogMode__Enum* create() {
            return il2cpp::create_object<app::FogMode__Enum>(get_class());
        }
    } // namespace FogMode__Enum
} // namespace app::classes::types
