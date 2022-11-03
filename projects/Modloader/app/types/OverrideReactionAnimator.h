#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OverrideReactionAnimator {
        namespace {
            inline app::OverrideReactionAnimator__Class* type_info_ref = nullptr;
        }
        inline app::OverrideReactionAnimator__Class** type_info = &type_info_ref;
        inline app::OverrideReactionAnimator__Class* get_class() {
            return il2cpp::get_class<app::OverrideReactionAnimator__Class>(type_info, "Moon.Timeline", "OverrideReactionAnimator");
        }
        inline app::OverrideReactionAnimator* create() {
            return il2cpp::create_object<app::OverrideReactionAnimator>(get_class());
        }
    } // namespace OverrideReactionAnimator
} // namespace app::classes::types
