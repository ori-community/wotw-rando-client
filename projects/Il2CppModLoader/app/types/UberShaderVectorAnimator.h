#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderVectorAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderVectorAnimator__Class** type_info;
        inline app::UberShaderVectorAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberShaderVectorAnimator__Class>(type_info, "Moon.Timeline", "UberShaderVectorAnimator");
        }
        inline app::UberShaderVectorAnimator* create() {
            return il2cpp::create_object<app::UberShaderVectorAnimator>(get_class());
        }
    } // namespace UberShaderVectorAnimator
} // namespace app::classes::types
