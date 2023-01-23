#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting__Class.h>
#include <Modloader/app/structs/BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting.h>

namespace app::classes::types {
    namespace BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting {
        namespace {
            inline app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting__Class** type_info = &type_info_ref;
        inline app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "BoostModeProfilingSetting", "CallDestroyWhenNotAwokenProfilingSetting");
        }
        inline app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting* create() {
            return il2cpp::create_object<app::BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting>(get_class());
        }
    } // namespace BoostModeProfilingSetting_CallDestroyWhenNotAwokenProfilingSetting
} // namespace app::classes::types
