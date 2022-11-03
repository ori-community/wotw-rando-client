#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightningController_LightningEvent {
        namespace {
            inline app::LightningController_LightningEvent__Class* type_info_ref = nullptr;
        }
        inline app::LightningController_LightningEvent__Class** type_info = &type_info_ref;
        inline app::LightningController_LightningEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::LightningController_LightningEvent__Class>(type_info, "", "LightningController", "LightningEvent");
        }
        inline app::LightningController_LightningEvent* create() {
            return il2cpp::create_object<app::LightningController_LightningEvent>(get_class());
        }
        inline app::LightningController_LightningEvent__Boxed* box(app::LightningController_LightningEvent value) {
            return il2cpp::box_value<app::LightningController_LightningEvent__Boxed>(get_class(), value);
        }
    } // namespace LightningController_LightningEvent
} // namespace app::classes::types
