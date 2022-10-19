#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnAnimationEnded {
        namespace {
            inline app::OnAnimationEnded__Class* type_info_ref = nullptr;
        }
        inline app::OnAnimationEnded__Class** type_info = &type_info_ref;
        inline app::OnAnimationEnded__Class* get_class() {
            return il2cpp::get_class<app::OnAnimationEnded__Class>(type_info, "fsm.triggers", "OnAnimationEnded");
        }
        inline app::OnAnimationEnded* create() {
            return il2cpp::create_object<app::OnAnimationEnded>(get_class());
        }
    } // namespace OnAnimationEnded
} // namespace app::classes::types
