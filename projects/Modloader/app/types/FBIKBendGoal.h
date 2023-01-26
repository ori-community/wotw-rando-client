#pragma once
#include <Modloader/app/structs/FBIKBendGoal.h>
#include <Modloader/app/structs/FBIKBendGoal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBIKBendGoal {
        inline app::FBIKBendGoal__Class** type_info() {
            static app::FBIKBendGoal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FBIKBendGoal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FBIKBendGoal__Class* get_class() {
            return il2cpp::get_class<app::FBIKBendGoal__Class>(type_info(), "RootMotion.Demos", "FBIKBendGoal");
        }
        inline app::FBIKBendGoal* create() {
            return il2cpp::create_object<app::FBIKBendGoal>(get_class());
        }
    } // namespace FBIKBendGoal
} // namespace app::classes::types
