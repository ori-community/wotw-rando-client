#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlideFeatherAnimator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GlideFeatherAnimator_c__Class** type_info;
        inline app::GlideFeatherAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GlideFeatherAnimator_c__Class>(type_info, "", "GlideFeatherAnimator", "<>c");
        }
        inline app::GlideFeatherAnimator_c* create() {
            return il2cpp::create_object<app::GlideFeatherAnimator_c>(get_class());
        }
    } // namespace GlideFeatherAnimator_c
} // namespace app::classes::types
