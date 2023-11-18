#pragma once
#include <Modloader/app/structs/LightningController_LightningEvent.h>
#include <Modloader/app/structs/LightningController_LightningEvent__Boxed.h>
#include <Modloader/app/structs/LightningController_LightningEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightningController_LightningEvent {
        inline app::LightningController_LightningEvent__Class** type_info() {
            static app::LightningController_LightningEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightningController_LightningEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightningController_LightningEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::LightningController_LightningEvent__Class>(type_info(), "", "LightningController", "LightningEvent");
        }
        inline app::LightningController_LightningEvent* create() {
            return il2cpp::create_object<app::LightningController_LightningEvent>(get_class());
        }
        inline app::LightningController_LightningEvent__Boxed* box(app::LightningController_LightningEvent value) {
            return il2cpp::box_value<app::LightningController_LightningEvent__Boxed>(get_class(), value);
        }
    } // namespace LightningController_LightningEvent
} // namespace app::classes::types
