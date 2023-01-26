#pragma once
#include <Modloader/app/structs/NPCCameraSetupConfiguration__Enum.h>
#include <Modloader/app/structs/NPCCameraSetupConfiguration__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCCameraSetupConfiguration__Enum {
        inline app::NPCCameraSetupConfiguration__Enum__Class** type_info() {
            static app::NPCCameraSetupConfiguration__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCCameraSetupConfiguration__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCCameraSetupConfiguration__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPCCameraSetupConfiguration__Enum__Class>(type_info(), "Moon", "NPCCameraSetupConfiguration");
        }
        inline app::NPCCameraSetupConfiguration__Enum* create() {
            return il2cpp::create_object<app::NPCCameraSetupConfiguration__Enum>(get_class());
        }
    } // namespace NPCCameraSetupConfiguration__Enum
} // namespace app::classes::types
