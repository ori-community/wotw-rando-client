#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitReactionBehaviour_StaggetEntry__Array {
        namespace {
            inline app::HitReactionBehaviour_StaggetEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::HitReactionBehaviour_StaggetEntry__Array__Class** type_info = &type_info_ref;
        inline app::HitReactionBehaviour_StaggetEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviour_StaggetEntry__Array__Class>(type_info, "Moon", "HitReactionBehaviour+StaggetEntry[]");
        }
        inline app::HitReactionBehaviour_StaggetEntry__Array* create() {
            return il2cpp::create_object<app::HitReactionBehaviour_StaggetEntry__Array>(get_class());
        }
    } // namespace HitReactionBehaviour_StaggetEntry__Array
} // namespace app::classes::types
