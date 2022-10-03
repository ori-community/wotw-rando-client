#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrilinearFilteringProfilingSetting {
        namespace {
            app::TrilinearFilteringProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::TrilinearFilteringProfilingSetting__Class** type_info = &type_info_ref;
        inline app::TrilinearFilteringProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TrilinearFilteringProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "TrilinearFilteringProfilingSetting");
        }
        inline app::TrilinearFilteringProfilingSetting* create() {
            return il2cpp::create_object<app::TrilinearFilteringProfilingSetting>(get_class());
        }
    } // namespace TrilinearFilteringProfilingSetting
} // namespace app::classes::types
