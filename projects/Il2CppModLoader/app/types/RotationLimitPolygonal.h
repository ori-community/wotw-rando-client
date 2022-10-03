#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal {
        namespace {
            app::RotationLimitPolygonal__Class* type_info_ref = nullptr;
        }
        app::RotationLimitPolygonal__Class** type_info = &type_info_ref;
        inline app::RotationLimitPolygonal__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitPolygonal__Class>(type_info, "RootMotion.FinalIK", "RotationLimitPolygonal");
        }
        inline app::RotationLimitPolygonal* create() {
            return il2cpp::create_object<app::RotationLimitPolygonal>(get_class());
        }
    } // namespace RotationLimitPolygonal
} // namespace app::classes::types
