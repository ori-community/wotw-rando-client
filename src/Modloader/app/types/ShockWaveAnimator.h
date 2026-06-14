#pragma once
#include <Modloader/app/structs/ShockWaveAnimator.h>
#include <Modloader/app/structs/ShockWaveAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShockWaveAnimator {
        inline app::ShockWaveAnimator__Class** type_info() {
            static app::ShockWaveAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShockWaveAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShockWaveAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShockWaveAnimator__Class>(type_info(), "", "ShockWaveAnimator");
        }
        inline app::ShockWaveAnimator* create() {
            return il2cpp::create_object<app::ShockWaveAnimator>(get_class());
        }
    } // namespace ShockWaveAnimator
} // namespace app::classes::types
