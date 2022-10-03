#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeslicedResourceUnloadingProfilingSetting {
        namespace {
            app::TimeslicedResourceUnloadingProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::TimeslicedResourceUnloadingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::TimeslicedResourceUnloadingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::TimeslicedResourceUnloadingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "TimeslicedResourceUnloadingProfilingSetting");
        }
        inline app::TimeslicedResourceUnloadingProfilingSetting* create() {
            return il2cpp::create_object<app::TimeslicedResourceUnloadingProfilingSetting>(get_class());
        }
    } // namespace TimeslicedResourceUnloadingProfilingSetting
} // namespace app::classes::types
