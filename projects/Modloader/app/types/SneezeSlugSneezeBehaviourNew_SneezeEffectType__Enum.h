#pragma once
#include <Modloader/app/structs/SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum.h>
#include <Modloader/app/structs/SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum {
        inline app::SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__Class** type_info() {
            static app::SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__Class>(type_info(), "", "SneezeSlugSneezeBehaviourNew", "SneezeEffectType");
        }
        inline app::SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum* create() {
            return il2cpp::create_object<app::SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum>(get_class());
        }
    } // namespace SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum
} // namespace app::classes::types
