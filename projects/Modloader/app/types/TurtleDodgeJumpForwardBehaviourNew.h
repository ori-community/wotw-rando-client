#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurtleDodgeJumpForwardBehaviourNew__Class.h>
#include <Modloader/app/structs/TurtleDodgeJumpForwardBehaviourNew.h>

namespace app::classes::types {
    namespace TurtleDodgeJumpForwardBehaviourNew {
        namespace {
            inline app::TurtleDodgeJumpForwardBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::TurtleDodgeJumpForwardBehaviourNew__Class** type_info = &type_info_ref;
        inline app::TurtleDodgeJumpForwardBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::TurtleDodgeJumpForwardBehaviourNew__Class>(type_info, "Moon", "TurtleDodgeJumpForwardBehaviourNew");
        }
        inline app::TurtleDodgeJumpForwardBehaviourNew* create() {
            return il2cpp::create_object<app::TurtleDodgeJumpForwardBehaviourNew>(get_class());
        }
    } // namespace TurtleDodgeJumpForwardBehaviourNew
} // namespace app::classes::types
