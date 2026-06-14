#pragma once
#include <Modloader/app/structs/StereoTargetEyeMask__Enum.h>
#include <Modloader/app/structs/StereoTargetEyeMask__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StereoTargetEyeMask__Enum {
        inline app::StereoTargetEyeMask__Enum__Class** type_info() {
            static app::StereoTargetEyeMask__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StereoTargetEyeMask__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StereoTargetEyeMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::StereoTargetEyeMask__Enum__Class>(type_info(), "UnityEngine", "StereoTargetEyeMask");
        }
        inline app::StereoTargetEyeMask__Enum* create() {
            return il2cpp::create_object<app::StereoTargetEyeMask__Enum>(get_class());
        }
    } // namespace StereoTargetEyeMask__Enum
} // namespace app::classes::types
