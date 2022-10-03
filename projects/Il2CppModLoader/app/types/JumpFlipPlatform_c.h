#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpFlipPlatform_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumpFlipPlatform_c__Class** type_info;
        inline app::JumpFlipPlatform_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpFlipPlatform_c__Class>(type_info, "", "JumpFlipPlatform", "<>c");
        }
        inline app::JumpFlipPlatform_c* create() {
            return il2cpp::create_object<app::JumpFlipPlatform_c>(get_class());
        }
    } // namespace JumpFlipPlatform_c
} // namespace app::classes::types
