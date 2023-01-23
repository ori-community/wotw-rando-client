#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour__Class.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour.h>

namespace app::classes::types {
    namespace HornBugHitReactionBehaviour {
        namespace {
            inline app::HornBugHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::HornBugHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::HornBugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugHitReactionBehaviour__Class>(type_info, "", "HornBugHitReactionBehaviour");
        }
        inline app::HornBugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::HornBugHitReactionBehaviour>(get_class());
        }
    } // namespace HornBugHitReactionBehaviour
} // namespace app::classes::types
