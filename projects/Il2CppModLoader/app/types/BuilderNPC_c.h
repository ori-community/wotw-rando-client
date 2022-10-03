#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderNPC_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuilderNPC_c__Class** type_info;
        inline app::BuilderNPC_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderNPC_c__Class>(type_info, "", "BuilderNPC", "<>c");
        }
        inline app::BuilderNPC_c* create() {
            return il2cpp::create_object<app::BuilderNPC_c>(get_class());
        }
    } // namespace BuilderNPC_c
} // namespace app::classes::types
