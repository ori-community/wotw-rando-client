#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialTypeVFXSettings_EffectSize__Enum {
        namespace {
            inline app::MaterialTypeVFXSettings_EffectSize__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MaterialTypeVFXSettings_EffectSize__Enum__Class** type_info = &type_info_ref;
        inline app::MaterialTypeVFXSettings_EffectSize__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MaterialTypeVFXSettings_EffectSize__Enum__Class>(type_info, "", "MaterialTypeVFXSettings", "EffectSize");
        }
        inline app::MaterialTypeVFXSettings_EffectSize__Enum* create() {
            return il2cpp::create_object<app::MaterialTypeVFXSettings_EffectSize__Enum>(get_class());
        }
    } // namespace MaterialTypeVFXSettings_EffectSize__Enum
} // namespace app::classes::types
