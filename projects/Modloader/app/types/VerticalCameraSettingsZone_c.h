#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone_c__Class.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone_c.h>

namespace app::classes::types {
    namespace VerticalCameraSettingsZone_c {
        inline app::VerticalCameraSettingsZone_c__Class** type_info = (app::VerticalCameraSettingsZone_c__Class**)(modloader::win::memory::resolve_rva(0x04710840));
        inline app::VerticalCameraSettingsZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VerticalCameraSettingsZone_c__Class>(type_info, "", "VerticalCameraSettingsZone", "<>c");
        }
        inline app::VerticalCameraSettingsZone_c* create() {
            return il2cpp::create_object<app::VerticalCameraSettingsZone_c>(get_class());
        }
    } // namespace VerticalCameraSettingsZone_c
} // namespace app::classes::types
