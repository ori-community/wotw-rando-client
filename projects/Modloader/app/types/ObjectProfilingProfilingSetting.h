#pragma once
#include <Modloader/app/structs/ObjectProfilingProfilingSetting.h>
#include <Modloader/app/structs/ObjectProfilingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectProfilingProfilingSetting {
        inline app::ObjectProfilingProfilingSetting__Class** type_info() {
            static app::ObjectProfilingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectProfilingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectProfilingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ObjectProfilingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ObjectProfilingProfilingSetting");
        }
        inline app::ObjectProfilingProfilingSetting* create() {
            return il2cpp::create_object<app::ObjectProfilingProfilingSetting>(get_class());
        }
    } // namespace ObjectProfilingProfilingSetting
} // namespace app::classes::types
