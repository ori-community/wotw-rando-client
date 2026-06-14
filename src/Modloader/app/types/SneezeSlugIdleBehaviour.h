#pragma once
#include <Modloader/app/structs/SneezeSlugIdleBehaviour.h>
#include <Modloader/app/structs/SneezeSlugIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugIdleBehaviour {
        inline app::SneezeSlugIdleBehaviour__Class** type_info() {
            static app::SneezeSlugIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugIdleBehaviour__Class>(type_info(), "", "SneezeSlugIdleBehaviour");
        }
        inline app::SneezeSlugIdleBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugIdleBehaviour>(get_class());
        }
    } // namespace SneezeSlugIdleBehaviour
} // namespace app::classes::types
