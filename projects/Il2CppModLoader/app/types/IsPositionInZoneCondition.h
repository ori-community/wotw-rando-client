#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsPositionInZoneCondition {
        namespace {
            inline app::IsPositionInZoneCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsPositionInZoneCondition__Class** type_info = &type_info_ref;
        inline app::IsPositionInZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsPositionInZoneCondition__Class>(type_info, "Moon.BehaviourSystem", "IsPositionInZoneCondition");
        }
        inline app::IsPositionInZoneCondition* create() {
            return il2cpp::create_object<app::IsPositionInZoneCondition>(get_class());
        }
    } // namespace IsPositionInZoneCondition
} // namespace app::classes::types
