#pragma once
#include <Modloader/app/structs/DebugPlayerTeleporter_LocomotionRequestMode__Enum.h>
#include <Modloader/app/structs/DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugPlayerTeleporter_LocomotionRequestMode__Enum {
        inline app::DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class** type_info() {
            static app::DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04786840));
            }
            return cache;
        }
        inline app::DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugPlayerTeleporter_LocomotionRequestMode__Enum__Class>(type_info(), "", "DebugPlayerTeleporter", "LocomotionRequestMode");
        }
        inline app::DebugPlayerTeleporter_LocomotionRequestMode__Enum* create() {
            return il2cpp::create_object<app::DebugPlayerTeleporter_LocomotionRequestMode__Enum>(get_class());
        }
    } // namespace DebugPlayerTeleporter_LocomotionRequestMode__Enum
} // namespace app::classes::types
