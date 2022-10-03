#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal_LimitPoint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RotationLimitPolygonal_LimitPoint__Class** type_info;
        inline app::RotationLimitPolygonal_LimitPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::RotationLimitPolygonal_LimitPoint__Class>(type_info, "RootMotion.FinalIK", "RotationLimitPolygonal", "LimitPoint");
        }
        inline app::RotationLimitPolygonal_LimitPoint* create() {
            return il2cpp::create_object<app::RotationLimitPolygonal_LimitPoint>(get_class());
        }
        inline app::RotationLimitPolygonal_LimitPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::RotationLimitPolygonal_LimitPoint__Array>(get_class(), size);
        }
    } // namespace RotationLimitPolygonal_LimitPoint
} // namespace app::classes::types
