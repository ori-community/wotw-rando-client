#pragma once
#include <Modloader/app/structs/CameraAdditiveSettings.h>
#include <Modloader/app/structs/CameraAdditiveSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraAdditiveSettings {
        inline app::CameraAdditiveSettings__Class** type_info() {
            static app::CameraAdditiveSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraAdditiveSettings__Class**)(modloader::win::memory::resolve_rva(0x047816E8));
            }
            return cache;
        }
        inline app::CameraAdditiveSettings__Class* get_class() {
            return il2cpp::get_class<app::CameraAdditiveSettings__Class>(type_info(), "", "CameraAdditiveSettings");
        }
        inline app::CameraAdditiveSettings* create() {
            return il2cpp::create_object<app::CameraAdditiveSettings>(get_class());
        }
    } // namespace CameraAdditiveSettings
} // namespace app::classes::types
