#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EffectTransformType__Enum {
        namespace {
            app::EffectTransformType__Enum__Class* type_info_ref = nullptr;
        }
        app::EffectTransformType__Enum__Class** type_info = &type_info_ref;
        inline app::EffectTransformType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EffectTransformType__Enum__Class>(type_info, "", "EffectTransformType");
        }
        inline app::EffectTransformType__Enum* create() {
            return il2cpp::create_object<app::EffectTransformType__Enum>(get_class());
        }
    } // namespace EffectTransformType__Enum
} // namespace app::classes::types
