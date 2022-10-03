#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchBoostController_HandheldGPUBoostMode__Enum {
        namespace {
            app::SwitchBoostController_HandheldGPUBoostMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SwitchBoostController_HandheldGPUBoostMode__Enum__Class** type_info = &type_info_ref;
        inline app::SwitchBoostController_HandheldGPUBoostMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SwitchBoostController_HandheldGPUBoostMode__Enum__Class>(type_info, "frameworks.Switch", "SwitchBoostController", "HandheldGPUBoostMode");
        }
        inline app::SwitchBoostController_HandheldGPUBoostMode__Enum* create() {
            return il2cpp::create_object<app::SwitchBoostController_HandheldGPUBoostMode__Enum>(get_class());
        }
    } // namespace SwitchBoostController_HandheldGPUBoostMode__Enum
} // namespace app::classes::types
