#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorkersOnAllCoresProfilingSetting__Class.h>
#include <Modloader/app/structs/WorkersOnAllCoresProfilingSetting.h>

namespace app::classes::types {
    namespace WorkersOnAllCoresProfilingSetting {
        namespace {
            inline app::WorkersOnAllCoresProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::WorkersOnAllCoresProfilingSetting__Class** type_info = &type_info_ref;
        inline app::WorkersOnAllCoresProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::WorkersOnAllCoresProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "WorkersOnAllCoresProfilingSetting");
        }
        inline app::WorkersOnAllCoresProfilingSetting* create() {
            return il2cpp::create_object<app::WorkersOnAllCoresProfilingSetting>(get_class());
        }
    } // namespace WorkersOnAllCoresProfilingSetting
} // namespace app::classes::types
