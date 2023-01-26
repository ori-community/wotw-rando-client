#pragma once
#include <Modloader/app/structs/PlayAnimatorBasedOnNightberry.h>
#include <Modloader/app/structs/PlayAnimatorBasedOnNightberry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayAnimatorBasedOnNightberry {
        inline app::PlayAnimatorBasedOnNightberry__Class** type_info() {
            static app::PlayAnimatorBasedOnNightberry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayAnimatorBasedOnNightberry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayAnimatorBasedOnNightberry__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimatorBasedOnNightberry__Class>(type_info(), "", "PlayAnimatorBasedOnNightberry");
        }
        inline app::PlayAnimatorBasedOnNightberry* create() {
            return il2cpp::create_object<app::PlayAnimatorBasedOnNightberry>(get_class());
        }
    } // namespace PlayAnimatorBasedOnNightberry
} // namespace app::classes::types
