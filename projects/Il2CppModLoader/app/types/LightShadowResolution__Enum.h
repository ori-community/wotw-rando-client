#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightShadowResolution__Enum {
        namespace {
            inline app::LightShadowResolution__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LightShadowResolution__Enum__Class** type_info = &type_info_ref;
        inline app::LightShadowResolution__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightShadowResolution__Enum__Class>(type_info, "UnityEngine.Rendering", "LightShadowResolution");
        }
        inline app::LightShadowResolution__Enum* create() {
            return il2cpp::create_object<app::LightShadowResolution__Enum>(get_class());
        }
    } // namespace LightShadowResolution__Enum
} // namespace app::classes::types
