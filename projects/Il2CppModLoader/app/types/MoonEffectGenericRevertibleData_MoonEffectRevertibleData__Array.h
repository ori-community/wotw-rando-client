#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array {
        namespace {
            inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array__Class** type_info = &type_info_ref;
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData+MoonEffectRevertibleData[]");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleData__Array
} // namespace app::classes::types
