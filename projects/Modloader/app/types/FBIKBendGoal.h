#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FBIKBendGoal {
        namespace {
            inline app::FBIKBendGoal__Class* type_info_ref = nullptr;
        }
        inline app::FBIKBendGoal__Class** type_info = &type_info_ref;
        inline app::FBIKBendGoal__Class* get_class() {
            return il2cpp::get_class<app::FBIKBendGoal__Class>(type_info, "RootMotion.Demos", "FBIKBendGoal");
        }
        inline app::FBIKBendGoal* create() {
            return il2cpp::create_object<app::FBIKBendGoal>(get_class());
        }
    } // namespace FBIKBendGoal
} // namespace app::classes::types
