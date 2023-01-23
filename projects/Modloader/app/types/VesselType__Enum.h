#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VesselType__Enum__Class.h>
#include <Modloader/app/structs/VesselType__Enum.h>

namespace app::classes::types {
    namespace VesselType__Enum {
        namespace {
            inline app::VesselType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VesselType__Enum__Class** type_info = &type_info_ref;
        inline app::VesselType__Enum__Class* get_class() {
            return il2cpp::get_class<app::VesselType__Enum__Class>(type_info, "ScreenshotIcons", "VesselType");
        }
        inline app::VesselType__Enum* create() {
            return il2cpp::create_object<app::VesselType__Enum>(get_class());
        }
    } // namespace VesselType__Enum
} // namespace app::classes::types
