#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectProfilingProfilingSetting {
        namespace {
            app::ObjectProfilingProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::ObjectProfilingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ObjectProfilingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ObjectProfilingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ObjectProfilingProfilingSetting");
        }
        inline app::ObjectProfilingProfilingSetting* create() {
            return il2cpp::create_object<app::ObjectProfilingProfilingSetting>(get_class());
        }
    } // namespace ObjectProfilingProfilingSetting
} // namespace app::classes::types
