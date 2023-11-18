#pragma once
#include <Modloader/app/structs/SavePedestalController_CanTeleportResult__Enum.h>
#include <Modloader/app/structs/SavePedestalController_CanTeleportResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SavePedestalController_CanTeleportResult__Enum {
        inline app::SavePedestalController_CanTeleportResult__Enum__Class** type_info() {
            static app::SavePedestalController_CanTeleportResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SavePedestalController_CanTeleportResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SavePedestalController_CanTeleportResult__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SavePedestalController_CanTeleportResult__Enum__Class>(type_info(), "", "SavePedestalController", "CanTeleportResult");
        }
        inline app::SavePedestalController_CanTeleportResult__Enum* create() {
            return il2cpp::create_object<app::SavePedestalController_CanTeleportResult__Enum>(get_class());
        }
    } // namespace SavePedestalController_CanTeleportResult__Enum
} // namespace app::classes::types
