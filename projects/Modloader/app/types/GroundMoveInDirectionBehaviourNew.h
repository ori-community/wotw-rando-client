#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundMoveInDirectionBehaviourNew {
        namespace {
            inline app::GroundMoveInDirectionBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::GroundMoveInDirectionBehaviourNew__Class** type_info = &type_info_ref;
        inline app::GroundMoveInDirectionBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundMoveInDirectionBehaviourNew__Class>(type_info, "Moon", "GroundMoveInDirectionBehaviourNew");
        }
        inline app::GroundMoveInDirectionBehaviourNew* create() {
            return il2cpp::create_object<app::GroundMoveInDirectionBehaviourNew>(get_class());
        }
    } // namespace GroundMoveInDirectionBehaviourNew
} // namespace app::classes::types
