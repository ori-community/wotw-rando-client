#pragma once
#include <Modloader/app/structs/ControllerVibrationSetting.h>
#include <Modloader/app/structs/ControllerVibrationSetting__Boxed.h>
#include <Modloader/app/structs/ControllerVibrationSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerVibrationSetting {
        inline app::ControllerVibrationSetting__Class** type_info() {
            static app::ControllerVibrationSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControllerVibrationSetting__Class**)(modloader::win::memory::resolve_rva(0x0475AD60));
            }
            return cache;
        }
        inline app::ControllerVibrationSetting__Class* get_class() {
            return il2cpp::get_class<app::ControllerVibrationSetting__Class>(type_info(), "frameworks.Switch", "ControllerVibrationSetting");
        }
        inline app::ControllerVibrationSetting* create() {
            return il2cpp::create_object<app::ControllerVibrationSetting>(get_class());
        }
        inline app::ControllerVibrationSetting__Boxed* box(app::ControllerVibrationSetting value) {
            return il2cpp::box_value<app::ControllerVibrationSetting__Boxed>(get_class(), value);
        }
    } // namespace ControllerVibrationSetting
} // namespace app::classes::types
