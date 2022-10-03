#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StereoTargetEyeMask__Enum {
        namespace {
            app::StereoTargetEyeMask__Enum__Class* type_info_ref = nullptr;
        }
        app::StereoTargetEyeMask__Enum__Class** type_info = &type_info_ref;
        inline app::StereoTargetEyeMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::StereoTargetEyeMask__Enum__Class>(type_info, "UnityEngine", "StereoTargetEyeMask");
        }
        inline app::StereoTargetEyeMask__Enum* create() {
            return il2cpp::create_object<app::StereoTargetEyeMask__Enum>(get_class());
        }
    } // namespace StereoTargetEyeMask__Enum
} // namespace app::classes::types
