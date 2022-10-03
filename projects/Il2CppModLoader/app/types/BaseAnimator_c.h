#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseAnimator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaseAnimator_c__Class** type_info;
        inline app::BaseAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseAnimator_c__Class>(type_info, "", "BaseAnimator", "<>c");
        }
        inline app::BaseAnimator_c* create() {
            return il2cpp::create_object<app::BaseAnimator_c>(get_class());
        }
    } // namespace BaseAnimator_c
} // namespace app::classes::types
