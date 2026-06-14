#pragma once
#include <Modloader/app/structs/CameraSettingsZone.h>
#include <Modloader/app/structs/CameraSettingsZone__Array.h>
#include <Modloader/app/structs/CameraSettingsZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettingsZone {
        inline app::CameraSettingsZone__Class** type_info() {
            static app::CameraSettingsZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraSettingsZone__Class**)(modloader::win::memory::resolve_rva(0x0473AD60));
            }
            return cache;
        }
        inline app::CameraSettingsZone__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsZone__Class>(type_info(), "", "CameraSettingsZone");
        }
        inline app::CameraSettingsZone* create() {
            return il2cpp::create_object<app::CameraSettingsZone>(get_class());
        }
        inline app::CameraSettingsZone__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraSettingsZone__Array>(get_class(), size);
        }
        inline app::CameraSettingsZone__Array* create_array(const std::vector<app::CameraSettingsZone*>& items) {
            return il2cpp::array_new<app::CameraSettingsZone__Array>(get_class(), items);
        }
    } // namespace CameraSettingsZone
} // namespace app::classes::types
