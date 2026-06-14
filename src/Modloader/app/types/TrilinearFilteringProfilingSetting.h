#pragma once
#include <Modloader/app/structs/TrilinearFilteringProfilingSetting.h>
#include <Modloader/app/structs/TrilinearFilteringProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrilinearFilteringProfilingSetting {
        inline app::TrilinearFilteringProfilingSetting__Class** type_info() {
            static app::TrilinearFilteringProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrilinearFilteringProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrilinearFilteringProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TrilinearFilteringProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "TrilinearFilteringProfilingSetting");
        }
        inline app::TrilinearFilteringProfilingSetting* create() {
            return il2cpp::create_object<app::TrilinearFilteringProfilingSetting>(get_class());
        }
    } // namespace TrilinearFilteringProfilingSetting
} // namespace app::classes::types
