#pragma once
#include <Modloader/app/structs/LightningAnimator.h>
#include <Modloader/app/structs/LightningAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightningAnimator {
        inline app::LightningAnimator__Class** type_info() {
            static app::LightningAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightningAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightningAnimator__Class* get_class() {
            return il2cpp::get_class<app::LightningAnimator__Class>(type_info(), "", "LightningAnimator");
        }
        inline app::LightningAnimator* create() {
            return il2cpp::create_object<app::LightningAnimator>(get_class());
        }
    } // namespace LightningAnimator
} // namespace app::classes::types
