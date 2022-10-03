#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class** type_info;
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleDataPool");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleDataPool
} // namespace app::classes::types
