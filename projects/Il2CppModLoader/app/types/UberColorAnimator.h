#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberColorAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberColorAnimator__Class** type_info;
        inline app::UberColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberColorAnimator__Class>(type_info, "", "UberColorAnimator");
        }
        inline app::UberColorAnimator* create() {
            return il2cpp::create_object<app::UberColorAnimator>(get_class());
        }
    } // namespace UberColorAnimator
} // namespace app::classes::types
