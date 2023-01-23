#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetWaterRisingPropertiesAction__Class.h>
#include <Modloader/app/structs/SetWaterRisingPropertiesAction.h>

namespace app::classes::types {
    namespace SetWaterRisingPropertiesAction {
        namespace {
            inline app::SetWaterRisingPropertiesAction__Class* type_info_ref = nullptr;
        }
        inline app::SetWaterRisingPropertiesAction__Class** type_info = &type_info_ref;
        inline app::SetWaterRisingPropertiesAction__Class* get_class() {
            return il2cpp::get_class<app::SetWaterRisingPropertiesAction__Class>(type_info, "", "SetWaterRisingPropertiesAction");
        }
        inline app::SetWaterRisingPropertiesAction* create() {
            return il2cpp::create_object<app::SetWaterRisingPropertiesAction>(get_class());
        }
    } // namespace SetWaterRisingPropertiesAction
} // namespace app::classes::types
