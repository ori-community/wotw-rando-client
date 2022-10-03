#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TokenizerStringBlock {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TokenizerStringBlock__Class** type_info;
        inline app::TokenizerStringBlock__Class* get_class() {
            return il2cpp::get_class<app::TokenizerStringBlock__Class>(type_info, "System.Security.Util", "TokenizerStringBlock");
        }
        inline app::TokenizerStringBlock* create() {
            return il2cpp::create_object<app::TokenizerStringBlock>(get_class());
        }
    } // namespace TokenizerStringBlock
} // namespace app::classes::types
