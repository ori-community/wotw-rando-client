#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCullingSystem_LightCullingGroupId__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCullingSystem_LightCullingGroupId__Enum__Class** type_info;
        inline app::LightCullingSystem_LightCullingGroupId__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCullingSystem_LightCullingGroupId__Enum__Class>(type_info, "", "LightCullingSystem", "LightCullingGroupId");
        }
        inline app::LightCullingSystem_LightCullingGroupId__Enum* create() {
            return il2cpp::create_object<app::LightCullingSystem_LightCullingGroupId__Enum>(get_class());
        }
    } // namespace LightCullingSystem_LightCullingGroupId__Enum
} // namespace app::classes::types
