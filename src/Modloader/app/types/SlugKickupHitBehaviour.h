#pragma once
#include <Modloader/app/structs/SlugKickupHitBehaviour.h>
#include <Modloader/app/structs/SlugKickupHitBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugKickupHitBehaviour {
        inline app::SlugKickupHitBehaviour__Class** type_info() {
            static app::SlugKickupHitBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugKickupHitBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugKickupHitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SlugKickupHitBehaviour__Class>(type_info(), "", "SlugKickupHitBehaviour");
        }
        inline app::SlugKickupHitBehaviour* create() {
            return il2cpp::create_object<app::SlugKickupHitBehaviour>(get_class());
        }
    } // namespace SlugKickupHitBehaviour
} // namespace app::classes::types
