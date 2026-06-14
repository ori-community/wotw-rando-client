#pragma once
#include <Modloader/app/structs/SetWaterRisingPropertiesAction.h>
#include <Modloader/app/structs/SetWaterRisingPropertiesAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetWaterRisingPropertiesAction {
        inline app::SetWaterRisingPropertiesAction__Class** type_info() {
            static app::SetWaterRisingPropertiesAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetWaterRisingPropertiesAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetWaterRisingPropertiesAction__Class* get_class() {
            return il2cpp::get_class<app::SetWaterRisingPropertiesAction__Class>(type_info(), "", "SetWaterRisingPropertiesAction");
        }
        inline app::SetWaterRisingPropertiesAction* create() {
            return il2cpp::create_object<app::SetWaterRisingPropertiesAction>(get_class());
        }
    } // namespace SetWaterRisingPropertiesAction
} // namespace app::classes::types
