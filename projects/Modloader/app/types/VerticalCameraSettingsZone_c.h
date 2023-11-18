#pragma once
#include <Modloader/app/structs/VerticalCameraSettingsZone_c.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerticalCameraSettingsZone_c {
        inline app::VerticalCameraSettingsZone_c__Class** type_info() {
            static app::VerticalCameraSettingsZone_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerticalCameraSettingsZone_c__Class**)(modloader::win::memory::resolve_rva(0x04710840));
            }
            return cache;
        }
        inline app::VerticalCameraSettingsZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VerticalCameraSettingsZone_c__Class>(type_info(), "", "VerticalCameraSettingsZone", "<>c");
        }
        inline app::VerticalCameraSettingsZone_c* create() {
            return il2cpp::create_object<app::VerticalCameraSettingsZone_c>(get_class());
        }
    } // namespace VerticalCameraSettingsZone_c
} // namespace app::classes::types
