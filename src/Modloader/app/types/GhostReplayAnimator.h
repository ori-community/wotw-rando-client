#pragma once
#include <Modloader/app/structs/GhostReplayAnimator.h>
#include <Modloader/app/structs/GhostReplayAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostReplayAnimator {
        inline app::GhostReplayAnimator__Class** type_info() {
            static app::GhostReplayAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostReplayAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostReplayAnimator__Class* get_class() {
            return il2cpp::get_class<app::GhostReplayAnimator__Class>(type_info(), "", "GhostReplayAnimator");
        }
        inline app::GhostReplayAnimator* create() {
            return il2cpp::create_object<app::GhostReplayAnimator>(get_class());
        }
    } // namespace GhostReplayAnimator
} // namespace app::classes::types
