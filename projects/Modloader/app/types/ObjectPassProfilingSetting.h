#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectPassProfilingSetting {
        namespace {
            inline app::ObjectPassProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::ObjectPassProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ObjectPassProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ObjectPassProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ObjectPassProfilingSetting");
        }
        inline app::ObjectPassProfilingSetting* create() {
            return il2cpp::create_object<app::ObjectPassProfilingSetting>(get_class());
        }
    } // namespace ObjectPassProfilingSetting
} // namespace app::classes::types
