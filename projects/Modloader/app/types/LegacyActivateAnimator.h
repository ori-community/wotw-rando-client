#pragma once
#include <Modloader/app/structs/LegacyActivateAnimator.h>
#include <Modloader/app/structs/LegacyActivateAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyActivateAnimator {
        inline app::LegacyActivateAnimator__Class** type_info() {
            static app::LegacyActivateAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyActivateAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyActivateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyActivateAnimator__Class>(type_info(), "", "LegacyActivateAnimator");
        }
        inline app::LegacyActivateAnimator* create() {
            return il2cpp::create_object<app::LegacyActivateAnimator>(get_class());
        }
    } // namespace LegacyActivateAnimator
} // namespace app::classes::types
