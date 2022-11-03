#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DistanceToClosestMortarPosition {
        namespace {
            inline app::DistanceToClosestMortarPosition__Class* type_info_ref = nullptr;
        }
        inline app::DistanceToClosestMortarPosition__Class** type_info = &type_info_ref;
        inline app::DistanceToClosestMortarPosition__Class* get_class() {
            return il2cpp::get_class<app::DistanceToClosestMortarPosition__Class>(type_info, "Moon.BehaviourSystem", "DistanceToClosestMortarPosition");
        }
        inline app::DistanceToClosestMortarPosition* create() {
            return il2cpp::create_object<app::DistanceToClosestMortarPosition>(get_class());
        }
    } // namespace DistanceToClosestMortarPosition
} // namespace app::classes::types
