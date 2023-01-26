#pragma once
#include <Modloader/app/structs/SneezeSlugSneezeBehaviour.h>
#include <Modloader/app/structs/SneezeSlugSneezeBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugSneezeBehaviour {
        inline app::SneezeSlugSneezeBehaviour__Class** type_info() {
            static app::SneezeSlugSneezeBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugSneezeBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugSneezeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugSneezeBehaviour__Class>(type_info(), "", "SneezeSlugSneezeBehaviour");
        }
        inline app::SneezeSlugSneezeBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugSneezeBehaviour>(get_class());
        }
    } // namespace SneezeSlugSneezeBehaviour
} // namespace app::classes::types
