#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TokenizerShortBlock {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TokenizerShortBlock__Class** type_info;
        inline app::TokenizerShortBlock__Class* get_class() {
            return il2cpp::get_class<app::TokenizerShortBlock__Class>(type_info, "System.Security.Util", "TokenizerShortBlock");
        }
        inline app::TokenizerShortBlock* create() {
            return il2cpp::create_object<app::TokenizerShortBlock>(get_class());
        }
    } // namespace TokenizerShortBlock
} // namespace app::classes::types
