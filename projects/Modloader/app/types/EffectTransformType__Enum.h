#pragma once
#include <Modloader/app/structs/EffectTransformType__Enum.h>
#include <Modloader/app/structs/EffectTransformType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EffectTransformType__Enum {
        inline app::EffectTransformType__Enum__Class** type_info() {
            static app::EffectTransformType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EffectTransformType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EffectTransformType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EffectTransformType__Enum__Class>(type_info(), "", "EffectTransformType");
        }
        inline app::EffectTransformType__Enum* create() {
            return il2cpp::create_object<app::EffectTransformType__Enum>(get_class());
        }
    } // namespace EffectTransformType__Enum
} // namespace app::classes::types
