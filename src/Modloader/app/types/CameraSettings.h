#pragma once
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/CameraSettings__Array.h>
#include <Modloader/app/structs/CameraSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettings {
        inline app::CameraSettings__Class** type_info() {
            static app::CameraSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraSettings__Class**)(modloader::win::memory::resolve_rva(0x0476AD78));
            }
            return cache;
        }
        inline app::CameraSettings__Class* get_class() {
            return il2cpp::get_class<app::CameraSettings__Class>(type_info(), "", "CameraSettings");
        }
        inline app::CameraSettings* create() {
            return il2cpp::create_object<app::CameraSettings>(get_class());
        }
        inline app::CameraSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraSettings__Array>(get_class(), size);
        }
        inline app::CameraSettings__Array* create_array(const std::vector<app::CameraSettings*>& items) {
            return il2cpp::array_new<app::CameraSettings__Array>(get_class(), items);
        }
    } // namespace CameraSettings
} // namespace app::classes::types
