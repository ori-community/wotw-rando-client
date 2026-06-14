#pragma once
#include <Modloader/app/structs/LegacyEnvironmentFogColorAnimator.h>
#include <Modloader/app/structs/LegacyEnvironmentFogColorAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyEnvironmentFogColorAnimator {
        inline app::LegacyEnvironmentFogColorAnimator__Class** type_info() {
            static app::LegacyEnvironmentFogColorAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyEnvironmentFogColorAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyEnvironmentFogColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyEnvironmentFogColorAnimator__Class>(type_info(), "", "LegacyEnvironmentFogColorAnimator");
        }
        inline app::LegacyEnvironmentFogColorAnimator* create() {
            return il2cpp::create_object<app::LegacyEnvironmentFogColorAnimator>(get_class());
        }
    } // namespace LegacyEnvironmentFogColorAnimator
} // namespace app::classes::types
