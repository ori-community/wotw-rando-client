#pragma once
#include <Modloader/app/structs/EnvironmentInfo.h>
#include <Modloader/app/structs/EnvironmentInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvironmentInfo {
        inline app::EnvironmentInfo__Class** type_info() {
            static app::EnvironmentInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnvironmentInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnvironmentInfo__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentInfo__Class>(type_info(), "Moon.Telemetry", "EnvironmentInfo");
        }
        inline app::EnvironmentInfo* create() {
            return il2cpp::create_object<app::EnvironmentInfo>(get_class());
        }
    } // namespace EnvironmentInfo
} // namespace app::classes::types
