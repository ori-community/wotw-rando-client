#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightShadows__Enum {
        namespace {
            inline app::LightShadows__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LightShadows__Enum__Class** type_info = &type_info_ref;
        inline app::LightShadows__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightShadows__Enum__Class>(type_info, "UnityEngine", "LightShadows");
        }
        inline app::LightShadows__Enum* create() {
            return il2cpp::create_object<app::LightShadows__Enum>(get_class());
        }
    } // namespace LightShadows__Enum
} // namespace app::classes::types
