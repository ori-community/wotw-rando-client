#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundMovementTimelineBehaviourNew__Class.h>
#include <Modloader/app/structs/GroundMovementTimelineBehaviourNew.h>

namespace app::classes::types {
    namespace GroundMovementTimelineBehaviourNew {
        namespace {
            inline app::GroundMovementTimelineBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::GroundMovementTimelineBehaviourNew__Class** type_info = &type_info_ref;
        inline app::GroundMovementTimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundMovementTimelineBehaviourNew__Class>(type_info, "", "GroundMovementTimelineBehaviourNew");
        }
        inline app::GroundMovementTimelineBehaviourNew* create() {
            return il2cpp::create_object<app::GroundMovementTimelineBehaviourNew>(get_class());
        }
    } // namespace GroundMovementTimelineBehaviourNew
} // namespace app::classes::types
