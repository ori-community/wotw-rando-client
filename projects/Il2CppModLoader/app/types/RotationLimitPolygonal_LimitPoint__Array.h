#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal_LimitPoint__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RotationLimitPolygonal_LimitPoint__Array__Class** type_info;
        inline app::RotationLimitPolygonal_LimitPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitPolygonal_LimitPoint__Array__Class>(type_info, "RootMotion.FinalIK", "RotationLimitPolygonal+LimitPoint[]");
        }
        inline app::RotationLimitPolygonal_LimitPoint__Array* create() {
            return il2cpp::create_object<app::RotationLimitPolygonal_LimitPoint__Array>(get_class());
        }
    } // namespace RotationLimitPolygonal_LimitPoint__Array
} // namespace app::classes::types
