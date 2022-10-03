#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvironmentInfo {
        namespace {
            app::EnvironmentInfo__Class* type_info_ref = nullptr;
        }
        app::EnvironmentInfo__Class** type_info = &type_info_ref;
        inline app::EnvironmentInfo__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentInfo__Class>(type_info, "Moon.Telemetry", "EnvironmentInfo");
        }
        inline app::EnvironmentInfo* create() {
            return il2cpp::create_object<app::EnvironmentInfo>(get_class());
        }
    } // namespace EnvironmentInfo
} // namespace app::classes::types
