#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_AAA_BloodOnScreen.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_AAA_BloodOnScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_AAA_BloodOnScreen {
        inline app::ShaderID_CameraFilterPack_AAA_BloodOnScreen__Class** type_info() {
            static app::ShaderID_CameraFilterPack_AAA_BloodOnScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_AAA_BloodOnScreen__Class**)(modloader::win::memory::resolve_rva(0x047734A0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_AAA_BloodOnScreen__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_AAA_BloodOnScreen__Class>(type_info(), "", "ShaderID_CameraFilterPack_AAA_BloodOnScreen");
        }
        inline app::ShaderID_CameraFilterPack_AAA_BloodOnScreen* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_AAA_BloodOnScreen>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_AAA_BloodOnScreen
} // namespace app::classes::types
