#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class** type_info;
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleRendererDataPool");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererDataPool
} // namespace app::classes::types
