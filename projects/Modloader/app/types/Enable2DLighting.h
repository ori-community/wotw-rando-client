#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Enable2DLighting__Class.h>
#include <Modloader/app/structs/Enable2DLighting.h>

namespace app::classes::types {
    namespace Enable2DLighting {
        namespace {
            inline app::Enable2DLighting__Class* type_info_ref = nullptr;
        }
        inline app::Enable2DLighting__Class** type_info = &type_info_ref;
        inline app::Enable2DLighting__Class* get_class() {
            return il2cpp::get_class<app::Enable2DLighting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "Enable2DLighting");
        }
        inline app::Enable2DLighting* create() {
            return il2cpp::create_object<app::Enable2DLighting>(get_class());
        }
    } // namespace Enable2DLighting
} // namespace app::classes::types
