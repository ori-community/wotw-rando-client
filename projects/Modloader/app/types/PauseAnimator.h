#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PauseAnimator {
        namespace {
            inline app::PauseAnimator__Class* type_info_ref = nullptr;
        }
        inline app::PauseAnimator__Class** type_info = &type_info_ref;
        inline app::PauseAnimator__Class* get_class() {
            return il2cpp::get_class<app::PauseAnimator__Class>(type_info, "Moon.Timeline", "PauseAnimator");
        }
        inline app::PauseAnimator* create() {
            return il2cpp::create_object<app::PauseAnimator>(get_class());
        }
    } // namespace PauseAnimator
} // namespace app::classes::types
