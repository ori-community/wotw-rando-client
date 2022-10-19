#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TokenizerStringBlock {
        inline app::TokenizerStringBlock__Class** type_info = (app::TokenizerStringBlock__Class**)(modloader::win::memory::resolve_rva(0x0472B038));
        inline app::TokenizerStringBlock__Class* get_class() {
            return il2cpp::get_class<app::TokenizerStringBlock__Class>(type_info, "System.Security.Util", "TokenizerStringBlock");
        }
        inline app::TokenizerStringBlock* create() {
            return il2cpp::create_object<app::TokenizerStringBlock>(get_class());
        }
    } // namespace TokenizerStringBlock
} // namespace app::classes::types
