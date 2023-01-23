#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array.h>

namespace app::classes::types {
    namespace HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array {
        namespace {
            inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class* type_info_ref = nullptr;
        }
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class** type_info = &type_info_ref;
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class>(type_info, "", "HornBugHitReactionBehaviour+NonInterruptibleTaskCondition[]");
        }
        inline app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array* create() {
            return il2cpp::create_object<app::HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array>(get_class());
        }
    } // namespace HornBugHitReactionBehaviour_NonInterruptibleTaskCondition__Array
} // namespace app::classes::types
