#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinFirewhirlSpell_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinFirewhirlSpell_c__Class** type_info;
        inline app::SeinFirewhirlSpell_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinFirewhirlSpell_c__Class>(type_info, "", "SeinFirewhirlSpell", "<>c");
        }
        inline app::SeinFirewhirlSpell_c* create() {
            return il2cpp::create_object<app::SeinFirewhirlSpell_c>(get_class());
        }
    } // namespace SeinFirewhirlSpell_c
} // namespace app::classes::types
