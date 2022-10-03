#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SuspendRenderingAnimator {
        namespace {
            app::SuspendRenderingAnimator__Class* type_info_ref = nullptr;
        }
        app::SuspendRenderingAnimator__Class** type_info = &type_info_ref;
        inline app::SuspendRenderingAnimator__Class* get_class() {
            return il2cpp::get_class<app::SuspendRenderingAnimator__Class>(type_info, "Moon.Timeline", "SuspendRenderingAnimator");
        }
        inline app::SuspendRenderingAnimator* create() {
            return il2cpp::create_object<app::SuspendRenderingAnimator>(get_class());
        }
    } // namespace SuspendRenderingAnimator
} // namespace app::classes::types
