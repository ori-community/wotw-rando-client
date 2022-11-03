#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MirroringAnimator {
        namespace {
            inline app::MirroringAnimator__Class* type_info_ref = nullptr;
        }
        inline app::MirroringAnimator__Class** type_info = &type_info_ref;
        inline app::MirroringAnimator__Class* get_class() {
            return il2cpp::get_class<app::MirroringAnimator__Class>(type_info, "Moon.Timeline", "MirroringAnimator");
        }
        inline app::MirroringAnimator* create() {
            return il2cpp::create_object<app::MirroringAnimator>(get_class());
        }
    } // namespace MirroringAnimator
} // namespace app::classes::types
