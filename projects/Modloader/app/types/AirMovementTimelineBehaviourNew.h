#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AirMovementTimelineBehaviourNew__Class.h>
#include <Modloader/app/structs/AirMovementTimelineBehaviourNew.h>

namespace app::classes::types {
    namespace AirMovementTimelineBehaviourNew {
        namespace {
            inline app::AirMovementTimelineBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::AirMovementTimelineBehaviourNew__Class** type_info = &type_info_ref;
        inline app::AirMovementTimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::AirMovementTimelineBehaviourNew__Class>(type_info, "", "AirMovementTimelineBehaviourNew");
        }
        inline app::AirMovementTimelineBehaviourNew* create() {
            return il2cpp::create_object<app::AirMovementTimelineBehaviourNew>(get_class());
        }
    } // namespace AirMovementTimelineBehaviourNew
} // namespace app::classes::types
