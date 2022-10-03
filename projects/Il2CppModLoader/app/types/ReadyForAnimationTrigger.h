#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReadyForAnimationTrigger {
        namespace {
            app::ReadyForAnimationTrigger__Class* type_info_ref = nullptr;
        }
        app::ReadyForAnimationTrigger__Class** type_info = &type_info_ref;
        inline app::ReadyForAnimationTrigger__Class* get_class() {
            return il2cpp::get_class<app::ReadyForAnimationTrigger__Class>(type_info, "", "ReadyForAnimationTrigger");
        }
        inline app::ReadyForAnimationTrigger* create() {
            return il2cpp::create_object<app::ReadyForAnimationTrigger>(get_class());
        }
    } // namespace ReadyForAnimationTrigger
} // namespace app::classes::types
