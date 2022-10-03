#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriggerActionAnimator {
        namespace {
            app::TriggerActionAnimator__Class* type_info_ref = nullptr;
        }
        app::TriggerActionAnimator__Class** type_info = &type_info_ref;
        inline app::TriggerActionAnimator__Class* get_class() {
            return il2cpp::get_class<app::TriggerActionAnimator__Class>(type_info, "Moon.Timeline", "TriggerActionAnimator");
        }
        inline app::TriggerActionAnimator* create() {
            return il2cpp::create_object<app::TriggerActionAnimator>(get_class());
        }
    } // namespace TriggerActionAnimator
} // namespace app::classes::types
