#pragma once
#include <Modloader/app/structs/LightningAnimator_LightningEvent.h>
#include <Modloader/app/structs/LightningAnimator_LightningEvent__Boxed.h>
#include <Modloader/app/structs/LightningAnimator_LightningEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightningAnimator_LightningEvent {
        inline app::LightningAnimator_LightningEvent__Class** type_info() {
            static app::LightningAnimator_LightningEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightningAnimator_LightningEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightningAnimator_LightningEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::LightningAnimator_LightningEvent__Class>(type_info(), "", "LightningAnimator", "LightningEvent");
        }
        inline app::LightningAnimator_LightningEvent* create() {
            return il2cpp::create_object<app::LightningAnimator_LightningEvent>(get_class());
        }
        inline app::LightningAnimator_LightningEvent__Boxed* box(app::LightningAnimator_LightningEvent value) {
            return il2cpp::box_value<app::LightningAnimator_LightningEvent__Boxed>(get_class(), value);
        }
    } // namespace LightningAnimator_LightningEvent
} // namespace app::classes::types
