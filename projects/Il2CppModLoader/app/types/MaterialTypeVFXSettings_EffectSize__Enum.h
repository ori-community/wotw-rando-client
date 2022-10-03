#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialTypeVFXSettings_EffectSize__Enum {
        namespace {
            app::MaterialTypeVFXSettings_EffectSize__Enum__Class* type_info_ref = nullptr;
        }
        app::MaterialTypeVFXSettings_EffectSize__Enum__Class** type_info = &type_info_ref;
        inline app::MaterialTypeVFXSettings_EffectSize__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MaterialTypeVFXSettings_EffectSize__Enum__Class>(type_info, "", "MaterialTypeVFXSettings", "EffectSize");
        }
        inline app::MaterialTypeVFXSettings_EffectSize__Enum* create() {
            return il2cpp::create_object<app::MaterialTypeVFXSettings_EffectSize__Enum>(get_class());
        }
    } // namespace MaterialTypeVFXSettings_EffectSize__Enum
} // namespace app::classes::types
