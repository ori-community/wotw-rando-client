#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightType__Enum {
        namespace {
            app::LightType__Enum__Class* type_info_ref = nullptr;
        }
        app::LightType__Enum__Class** type_info = &type_info_ref;
        inline app::LightType__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightType__Enum__Class>(type_info, "UnityEngine", "LightType");
        }
        inline app::LightType__Enum* create() {
            return il2cpp::create_object<app::LightType__Enum>(get_class());
        }
    } // namespace LightType__Enum
} // namespace app::classes::types
