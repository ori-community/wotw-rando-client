#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BendGoal__Class.h>
#include <Modloader/app/structs/BendGoal.h>

namespace app::classes::types {
    namespace BendGoal {
        namespace {
            inline app::BendGoal__Class* type_info_ref = nullptr;
        }
        inline app::BendGoal__Class** type_info = &type_info_ref;
        inline app::BendGoal__Class* get_class() {
            return il2cpp::get_class<app::BendGoal__Class>(type_info, "RootMotion.Demos", "BendGoal");
        }
        inline app::BendGoal* create() {
            return il2cpp::create_object<app::BendGoal>(get_class());
        }
    } // namespace BendGoal
} // namespace app::classes::types
