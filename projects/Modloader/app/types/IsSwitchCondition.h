#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsSwitchCondition {
        namespace {
            inline app::IsSwitchCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsSwitchCondition__Class** type_info = &type_info_ref;
        inline app::IsSwitchCondition__Class* get_class() {
            return il2cpp::get_class<app::IsSwitchCondition__Class>(type_info, "", "IsSwitchCondition");
        }
        inline app::IsSwitchCondition* create() {
            return il2cpp::create_object<app::IsSwitchCondition>(get_class());
        }
    } // namespace IsSwitchCondition
} // namespace app::classes::types
