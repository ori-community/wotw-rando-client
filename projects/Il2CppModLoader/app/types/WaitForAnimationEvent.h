#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitForAnimationEvent {
        namespace {
            app::WaitForAnimationEvent__Class* type_info_ref = nullptr;
        }
        app::WaitForAnimationEvent__Class** type_info = &type_info_ref;
        inline app::WaitForAnimationEvent__Class* get_class() {
            return il2cpp::get_class<app::WaitForAnimationEvent__Class>(type_info, "", "WaitForAnimationEvent");
        }
        inline app::WaitForAnimationEvent* create() {
            return il2cpp::create_object<app::WaitForAnimationEvent>(get_class());
        }
    } // namespace WaitForAnimationEvent
} // namespace app::classes::types
