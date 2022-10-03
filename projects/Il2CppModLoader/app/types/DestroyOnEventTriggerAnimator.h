#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyOnEventTriggerAnimator {
        namespace {
            app::DestroyOnEventTriggerAnimator__Class* type_info_ref = nullptr;
        }
        app::DestroyOnEventTriggerAnimator__Class** type_info = &type_info_ref;
        inline app::DestroyOnEventTriggerAnimator__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnEventTriggerAnimator__Class>(type_info, "", "DestroyOnEventTriggerAnimator");
        }
        inline app::DestroyOnEventTriggerAnimator* create() {
            return il2cpp::create_object<app::DestroyOnEventTriggerAnimator>(get_class());
        }
    } // namespace DestroyOnEventTriggerAnimator
} // namespace app::classes::types
