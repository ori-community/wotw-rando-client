#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsInZoneCondition__Class.h>
#include <Modloader/app/structs/IsInZoneCondition.h>

namespace app::classes::types {
    namespace IsInZoneCondition {
        namespace {
            inline app::IsInZoneCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsInZoneCondition__Class** type_info = &type_info_ref;
        inline app::IsInZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsInZoneCondition__Class>(type_info, "", "IsInZoneCondition");
        }
        inline app::IsInZoneCondition* create() {
            return il2cpp::create_object<app::IsInZoneCondition>(get_class());
        }
    } // namespace IsInZoneCondition
} // namespace app::classes::types
