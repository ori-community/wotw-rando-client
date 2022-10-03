#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NPCCameraSetupConfiguration__Enum {
        namespace {
            app::NPCCameraSetupConfiguration__Enum__Class* type_info_ref = nullptr;
        }
        app::NPCCameraSetupConfiguration__Enum__Class** type_info = &type_info_ref;
        inline app::NPCCameraSetupConfiguration__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPCCameraSetupConfiguration__Enum__Class>(type_info, "Moon", "NPCCameraSetupConfiguration");
        }
        inline app::NPCCameraSetupConfiguration__Enum* create() {
            return il2cpp::create_object<app::NPCCameraSetupConfiguration__Enum>(get_class());
        }
    } // namespace NPCCameraSetupConfiguration__Enum
} // namespace app::classes::types
