#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class** type_info;
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleData");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData>(get_class());
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array>(get_class(), size);
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array* create_array(const std::vector<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData*>& items) {
            return il2cpp::array_new<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array>(get_class(), items);
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleData
} // namespace app::classes::types
