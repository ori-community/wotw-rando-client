#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCullingSystem_LightCullingGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCullingSystem_LightCullingGroup__Class** type_info;
        inline app::LightCullingSystem_LightCullingGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCullingSystem_LightCullingGroup__Class>(type_info, "", "LightCullingSystem", "LightCullingGroup");
        }
        inline app::LightCullingSystem_LightCullingGroup* create() {
            return il2cpp::create_object<app::LightCullingSystem_LightCullingGroup>(get_class());
        }
        inline app::LightCullingSystem_LightCullingGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCullingSystem_LightCullingGroup__Array>(get_class(), size);
        }
    } // namespace LightCullingSystem_LightCullingGroup
} // namespace app::classes::types
