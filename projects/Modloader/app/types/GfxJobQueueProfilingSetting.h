#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GfxJobQueueProfilingSetting__Class.h>
#include <Modloader/app/structs/GfxJobQueueProfilingSetting.h>

namespace app::classes::types {
    namespace GfxJobQueueProfilingSetting {
        namespace {
            inline app::GfxJobQueueProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::GfxJobQueueProfilingSetting__Class** type_info = &type_info_ref;
        inline app::GfxJobQueueProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::GfxJobQueueProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "GfxJobQueueProfilingSetting");
        }
        inline app::GfxJobQueueProfilingSetting* create() {
            return il2cpp::create_object<app::GfxJobQueueProfilingSetting>(get_class());
        }
    } // namespace GfxJobQueueProfilingSetting
} // namespace app::classes::types
