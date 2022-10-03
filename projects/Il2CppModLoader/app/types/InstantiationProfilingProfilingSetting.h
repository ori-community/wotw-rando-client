#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiationProfilingProfilingSetting {
        namespace {
            app::InstantiationProfilingProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::InstantiationProfilingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::InstantiationProfilingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::InstantiationProfilingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "InstantiationProfilingProfilingSetting");
        }
        inline app::InstantiationProfilingProfilingSetting* create() {
            return il2cpp::create_object<app::InstantiationProfilingProfilingSetting>(get_class());
        }
    } // namespace InstantiationProfilingProfilingSetting
} // namespace app::classes::types
