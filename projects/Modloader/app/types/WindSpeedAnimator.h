#pragma once
#include <Modloader/app/structs/WindSpeedAnimator.h>
#include <Modloader/app/structs/WindSpeedAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindSpeedAnimator {
        inline app::WindSpeedAnimator__Class** type_info() {
            static app::WindSpeedAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindSpeedAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindSpeedAnimator__Class* get_class() {
            return il2cpp::get_class<app::WindSpeedAnimator__Class>(type_info(), "", "WindSpeedAnimator");
        }
        inline app::WindSpeedAnimator* create() {
            return il2cpp::create_object<app::WindSpeedAnimator>(get_class());
        }
    } // namespace WindSpeedAnimator
} // namespace app::classes::types
