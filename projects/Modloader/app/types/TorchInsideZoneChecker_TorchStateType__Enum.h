#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TorchInsideZoneChecker_TorchStateType__Enum__Class.h>
#include <Modloader/app/structs/TorchInsideZoneChecker_TorchStateType__Enum.h>

namespace app::classes::types {
    namespace TorchInsideZoneChecker_TorchStateType__Enum {
        namespace {
            inline app::TorchInsideZoneChecker_TorchStateType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TorchInsideZoneChecker_TorchStateType__Enum__Class** type_info = &type_info_ref;
        inline app::TorchInsideZoneChecker_TorchStateType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TorchInsideZoneChecker_TorchStateType__Enum__Class>(type_info, "", "TorchInsideZoneChecker", "TorchStateType");
        }
        inline app::TorchInsideZoneChecker_TorchStateType__Enum* create() {
            return il2cpp::create_object<app::TorchInsideZoneChecker_TorchStateType__Enum>(get_class());
        }
    } // namespace TorchInsideZoneChecker_TorchStateType__Enum
} // namespace app::classes::types
