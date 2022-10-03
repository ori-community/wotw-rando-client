#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MathUtilities {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MathUtilities__Class** type_info;
        inline app::MathUtilities__Class* get_class() {
            return il2cpp::get_class<app::MathUtilities__Class>(type_info, "UberShader.SpriteSharp", "MathUtilities");
        }
        inline app::MathUtilities* create() {
            return il2cpp::create_object<app::MathUtilities>(get_class());
        }
    } // namespace MathUtilities
} // namespace app::classes::types
