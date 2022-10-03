#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightmapsMode__Enum {
        namespace {
            app::LightmapsMode__Enum__Class* type_info_ref = nullptr;
        }
        app::LightmapsMode__Enum__Class** type_info = &type_info_ref;
        inline app::LightmapsMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightmapsMode__Enum__Class>(type_info, "UnityEngine", "LightmapsMode");
        }
        inline app::LightmapsMode__Enum* create() {
            return il2cpp::create_object<app::LightmapsMode__Enum>(get_class());
        }
    } // namespace LightmapsMode__Enum
} // namespace app::classes::types
