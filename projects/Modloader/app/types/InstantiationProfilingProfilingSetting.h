#pragma once
#include <Modloader/app/structs/InstantiationProfilingProfilingSetting.h>
#include <Modloader/app/structs/InstantiationProfilingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiationProfilingProfilingSetting {
        inline app::InstantiationProfilingProfilingSetting__Class** type_info() {
            static app::InstantiationProfilingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstantiationProfilingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstantiationProfilingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::InstantiationProfilingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "InstantiationProfilingProfilingSetting");
        }
        inline app::InstantiationProfilingProfilingSetting* create() {
            return il2cpp::create_object<app::InstantiationProfilingProfilingSetting>(get_class());
        }
    } // namespace InstantiationProfilingProfilingSetting
} // namespace app::classes::types
