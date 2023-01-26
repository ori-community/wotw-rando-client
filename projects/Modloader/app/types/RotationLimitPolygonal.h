#pragma once
#include <Modloader/app/structs/RotationLimitPolygonal.h>
#include <Modloader/app/structs/RotationLimitPolygonal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal {
        inline app::RotationLimitPolygonal__Class** type_info() {
            static app::RotationLimitPolygonal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationLimitPolygonal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationLimitPolygonal__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitPolygonal__Class>(type_info(), "RootMotion.FinalIK", "RotationLimitPolygonal");
        }
        inline app::RotationLimitPolygonal* create() {
            return il2cpp::create_object<app::RotationLimitPolygonal>(get_class());
        }
    } // namespace RotationLimitPolygonal
} // namespace app::classes::types
