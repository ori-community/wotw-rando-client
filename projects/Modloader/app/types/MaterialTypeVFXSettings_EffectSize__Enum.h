#pragma once
#include <Modloader/app/structs/MaterialTypeVFXSettings_EffectSize__Enum.h>
#include <Modloader/app/structs/MaterialTypeVFXSettings_EffectSize__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialTypeVFXSettings_EffectSize__Enum {
        inline app::MaterialTypeVFXSettings_EffectSize__Enum__Class** type_info() {
            static app::MaterialTypeVFXSettings_EffectSize__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialTypeVFXSettings_EffectSize__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialTypeVFXSettings_EffectSize__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MaterialTypeVFXSettings_EffectSize__Enum__Class>(type_info(), "", "MaterialTypeVFXSettings", "EffectSize");
        }
        inline app::MaterialTypeVFXSettings_EffectSize__Enum* create() {
            return il2cpp::create_object<app::MaterialTypeVFXSettings_EffectSize__Enum>(get_class());
        }
    } // namespace MaterialTypeVFXSettings_EffectSize__Enum
} // namespace app::classes::types
