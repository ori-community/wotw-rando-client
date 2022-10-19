#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostReplayAnimator {
        namespace {
            inline app::GhostReplayAnimator__Class* type_info_ref = nullptr;
        }
        inline app::GhostReplayAnimator__Class** type_info = &type_info_ref;
        inline app::GhostReplayAnimator__Class* get_class() {
            return il2cpp::get_class<app::GhostReplayAnimator__Class>(type_info, "", "GhostReplayAnimator");
        }
        inline app::GhostReplayAnimator* create() {
            return il2cpp::create_object<app::GhostReplayAnimator>(get_class());
        }
    } // namespace GhostReplayAnimator
} // namespace app::classes::types
