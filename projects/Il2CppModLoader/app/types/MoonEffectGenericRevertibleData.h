#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData {
        namespace {
            inline app::MoonEffectGenericRevertibleData__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectGenericRevertibleData__Class** type_info = &type_info_ref;
        inline app::MoonEffectGenericRevertibleData__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectGenericRevertibleData__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData");
        }
        inline app::MoonEffectGenericRevertibleData* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData
} // namespace app::classes::types
