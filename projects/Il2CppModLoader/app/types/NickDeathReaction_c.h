#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NickDeathReaction_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NickDeathReaction_c__Class** type_info;
        inline app::NickDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NickDeathReaction_c__Class>(type_info, "", "NickDeathReaction", "<>c");
        }
        inline app::NickDeathReaction_c* create() {
            return il2cpp::create_object<app::NickDeathReaction_c>(get_class());
        }
    } // namespace NickDeathReaction_c
} // namespace app::classes::types
