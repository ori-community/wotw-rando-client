#pragma once
#include <Modloader/app/structs/DebugPlayerTeleporter_DebugMarkerMode__Enum.h>
#include <Modloader/app/structs/DebugPlayerTeleporter_DebugMarkerMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugPlayerTeleporter_DebugMarkerMode__Enum {
        inline app::DebugPlayerTeleporter_DebugMarkerMode__Enum__Class** type_info() {
            static app::DebugPlayerTeleporter_DebugMarkerMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugPlayerTeleporter_DebugMarkerMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugPlayerTeleporter_DebugMarkerMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugPlayerTeleporter_DebugMarkerMode__Enum__Class>(type_info(), "", "DebugPlayerTeleporter", "DebugMarkerMode");
        }
        inline app::DebugPlayerTeleporter_DebugMarkerMode__Enum* create() {
            return il2cpp::create_object<app::DebugPlayerTeleporter_DebugMarkerMode__Enum>(get_class());
        }
    } // namespace DebugPlayerTeleporter_DebugMarkerMode__Enum
} // namespace app::classes::types
