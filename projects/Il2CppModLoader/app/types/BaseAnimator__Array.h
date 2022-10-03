#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseAnimator__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaseAnimator__Array__Class** type_info;
        inline app::BaseAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseAnimator__Array__Class>(type_info, "", "BaseAnimator[]");
        }
        inline app::BaseAnimator__Array* create() {
            return il2cpp::create_object<app::BaseAnimator__Array>(get_class());
        }
    } // namespace BaseAnimator__Array
} // namespace app::classes::types
