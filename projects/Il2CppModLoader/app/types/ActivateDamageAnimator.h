#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivateDamageAnimator {
        namespace {
            inline app::ActivateDamageAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ActivateDamageAnimator__Class** type_info = &type_info_ref;
        inline app::ActivateDamageAnimator__Class* get_class() {
            return il2cpp::get_class<app::ActivateDamageAnimator__Class>(type_info, "Moon.Timeline", "ActivateDamageAnimator");
        }
        inline app::ActivateDamageAnimator* create() {
            return il2cpp::create_object<app::ActivateDamageAnimator>(get_class());
        }
    } // namespace ActivateDamageAnimator
} // namespace app::classes::types
