#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitReactionBehaviourOld_HitReactionEntry__Array {
        namespace {
            inline app::HitReactionBehaviourOld_HitReactionEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::HitReactionBehaviourOld_HitReactionEntry__Array__Class** type_info = &type_info_ref;
        inline app::HitReactionBehaviourOld_HitReactionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviourOld_HitReactionEntry__Array__Class>(type_info, "Moon", "HitReactionBehaviourOld+HitReactionEntry[]");
        }
        inline app::HitReactionBehaviourOld_HitReactionEntry__Array* create() {
            return il2cpp::create_object<app::HitReactionBehaviourOld_HitReactionEntry__Array>(get_class());
        }
    } // namespace HitReactionBehaviourOld_HitReactionEntry__Array
} // namespace app::classes::types
