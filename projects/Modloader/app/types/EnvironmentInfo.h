#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnvironmentInfo {
        namespace {
            inline app::EnvironmentInfo__Class* type_info_ref = nullptr;
        }
        inline app::EnvironmentInfo__Class** type_info = &type_info_ref;
        inline app::EnvironmentInfo__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentInfo__Class>(type_info, "Moon.Telemetry", "EnvironmentInfo");
        }
        inline app::EnvironmentInfo* create() {
            return il2cpp::create_object<app::EnvironmentInfo>(get_class());
        }
    } // namespace EnvironmentInfo
} // namespace app::classes::types
