#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal_ReachCone__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RotationLimitPolygonal_ReachCone__Array__Class** type_info;
        inline app::RotationLimitPolygonal_ReachCone__Array__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitPolygonal_ReachCone__Array__Class>(type_info, "RootMotion.FinalIK", "RotationLimitPolygonal+ReachCone[]");
        }
        inline app::RotationLimitPolygonal_ReachCone__Array* create() {
            return il2cpp::create_object<app::RotationLimitPolygonal_ReachCone__Array>(get_class());
        }
    } // namespace RotationLimitPolygonal_ReachCone__Array
} // namespace app::classes::types
