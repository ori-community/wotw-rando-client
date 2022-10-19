#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsPositionInNoGoZoneCondition {
        namespace {
            inline app::IsPositionInNoGoZoneCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsPositionInNoGoZoneCondition__Class** type_info = &type_info_ref;
        inline app::IsPositionInNoGoZoneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsPositionInNoGoZoneCondition__Class>(type_info, "Moon.BehaviourSystem", "IsPositionInNoGoZoneCondition");
        }
        inline app::IsPositionInNoGoZoneCondition* create() {
            return il2cpp::create_object<app::IsPositionInNoGoZoneCondition>(get_class());
        }
    } // namespace IsPositionInNoGoZoneCondition
} // namespace app::classes::types
