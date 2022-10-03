#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrainScript_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrainScript_c__Class** type_info;
        inline app::BrainScript_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BrainScript_c__Class>(type_info, "", "BrainScript", "<>c");
        }
        inline app::BrainScript_c* create() {
            return il2cpp::create_object<app::BrainScript_c>(get_class());
        }
    } // namespace BrainScript_c
} // namespace app::classes::types
