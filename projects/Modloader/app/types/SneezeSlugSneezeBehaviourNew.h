#pragma once
#include <Modloader/app/structs/SneezeSlugSneezeBehaviourNew.h>
#include <Modloader/app/structs/SneezeSlugSneezeBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugSneezeBehaviourNew {
        inline app::SneezeSlugSneezeBehaviourNew__Class** type_info() {
            static app::SneezeSlugSneezeBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugSneezeBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugSneezeBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugSneezeBehaviourNew__Class>(type_info(), "", "SneezeSlugSneezeBehaviourNew");
        }
        inline app::SneezeSlugSneezeBehaviourNew* create() {
            return il2cpp::create_object<app::SneezeSlugSneezeBehaviourNew>(get_class());
        }
    } // namespace SneezeSlugSneezeBehaviourNew
} // namespace app::classes::types
