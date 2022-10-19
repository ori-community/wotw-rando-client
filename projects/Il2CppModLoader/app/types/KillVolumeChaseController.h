#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KillVolumeChaseController {
        namespace {
            inline app::KillVolumeChaseController__Class* type_info_ref = nullptr;
        }
        inline app::KillVolumeChaseController__Class** type_info = &type_info_ref;
        inline app::KillVolumeChaseController__Class* get_class() {
            return il2cpp::get_class<app::KillVolumeChaseController__Class>(type_info, "", "KillVolumeChaseController");
        }
        inline app::KillVolumeChaseController* create() {
            return il2cpp::create_object<app::KillVolumeChaseController>(get_class());
        }
    } // namespace KillVolumeChaseController
} // namespace app::classes::types
