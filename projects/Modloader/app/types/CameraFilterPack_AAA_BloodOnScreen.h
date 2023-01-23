#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_AAA_BloodOnScreen__Class.h>
#include <Modloader/app/structs/CameraFilterPack_AAA_BloodOnScreen.h>

namespace app::classes::types {
    namespace CameraFilterPack_AAA_BloodOnScreen {
        namespace {
            inline app::CameraFilterPack_AAA_BloodOnScreen__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_AAA_BloodOnScreen__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_AAA_BloodOnScreen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_AAA_BloodOnScreen__Class>(type_info, "", "CameraFilterPack_AAA_BloodOnScreen");
        }
        inline app::CameraFilterPack_AAA_BloodOnScreen* create() {
            return il2cpp::create_object<app::CameraFilterPack_AAA_BloodOnScreen>(get_class());
        }
    } // namespace CameraFilterPack_AAA_BloodOnScreen
} // namespace app::classes::types
