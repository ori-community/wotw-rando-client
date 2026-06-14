#pragma once
#include <Modloader/app/structs/Recoil_Handedness__Enum.h>
#include <Modloader/app/structs/Recoil_Handedness__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Recoil_Handedness__Enum {
        inline app::Recoil_Handedness__Enum__Class** type_info() {
            static app::Recoil_Handedness__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Recoil_Handedness__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Recoil_Handedness__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Recoil_Handedness__Enum__Class>(type_info(), "RootMotion.FinalIK", "Recoil", "Handedness");
        }
        inline app::Recoil_Handedness__Enum* create() {
            return il2cpp::create_object<app::Recoil_Handedness__Enum>(get_class());
        }
    } // namespace Recoil_Handedness__Enum
} // namespace app::classes::types
