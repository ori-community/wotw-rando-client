#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabDeathReaction_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrabDeathReaction_c__Class** type_info;
        inline app::CrabDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabDeathReaction_c__Class>(type_info, "", "CrabDeathReaction", "<>c");
        }
        inline app::CrabDeathReaction_c* create() {
            return il2cpp::create_object<app::CrabDeathReaction_c>(get_class());
        }
    } // namespace CrabDeathReaction_c
} // namespace app::classes::types
