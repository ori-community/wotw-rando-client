#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SandWormEntity_c__Class** type_info;
        inline app::SandWormEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormEntity_c__Class>(type_info, "", "SandWormEntity", "<>c");
        }
        inline app::SandWormEntity_c* create() {
            return il2cpp::create_object<app::SandWormEntity_c>(get_class());
        }
    } // namespace SandWormEntity_c
} // namespace app::classes::types
