#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DeathDataPoint__Class.h>
#include <Modloader/app/structs/DeathDataPoint.h>

namespace app::classes::types {
    namespace DeathDataPoint {
        namespace {
            inline app::DeathDataPoint__Class* type_info_ref = nullptr;
        }
        inline app::DeathDataPoint__Class** type_info = &type_info_ref;
        inline app::DeathDataPoint__Class* get_class() {
            return il2cpp::get_class<app::DeathDataPoint__Class>(type_info, "Moon.Telemetry", "DeathDataPoint");
        }
        inline app::DeathDataPoint* create() {
            return il2cpp::create_object<app::DeathDataPoint>(get_class());
        }
    } // namespace DeathDataPoint
} // namespace app::classes::types
