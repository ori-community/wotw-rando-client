#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Enable3DLighting__Class.h>
#include <Modloader/app/structs/Enable3DLighting.h>

namespace app::classes::types {
    namespace Enable3DLighting {
        namespace {
            inline app::Enable3DLighting__Class* type_info_ref = nullptr;
        }
        inline app::Enable3DLighting__Class** type_info = &type_info_ref;
        inline app::Enable3DLighting__Class* get_class() {
            return il2cpp::get_class<app::Enable3DLighting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "Enable3DLighting");
        }
        inline app::Enable3DLighting* create() {
            return il2cpp::create_object<app::Enable3DLighting>(get_class());
        }
    } // namespace Enable3DLighting
} // namespace app::classes::types
