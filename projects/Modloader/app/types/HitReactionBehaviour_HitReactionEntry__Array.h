#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HitReactionBehaviour_HitReactionEntry__Array__Class.h>
#include <Modloader/app/structs/HitReactionBehaviour_HitReactionEntry__Array.h>

namespace app::classes::types {
    namespace HitReactionBehaviour_HitReactionEntry__Array {
        namespace {
            inline app::HitReactionBehaviour_HitReactionEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::HitReactionBehaviour_HitReactionEntry__Array__Class** type_info = &type_info_ref;
        inline app::HitReactionBehaviour_HitReactionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReactionBehaviour_HitReactionEntry__Array__Class>(type_info, "Moon", "HitReactionBehaviour+HitReactionEntry[]");
        }
        inline app::HitReactionBehaviour_HitReactionEntry__Array* create() {
            return il2cpp::create_object<app::HitReactionBehaviour_HitReactionEntry__Array>(get_class());
        }
    } // namespace HitReactionBehaviour_HitReactionEntry__Array
} // namespace app::classes::types
