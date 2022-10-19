#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
