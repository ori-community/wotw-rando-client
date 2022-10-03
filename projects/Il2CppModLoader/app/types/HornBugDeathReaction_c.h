#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugDeathReaction_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HornBugDeathReaction_c__Class** type_info;
        inline app::HornBugDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugDeathReaction_c__Class>(type_info, "", "HornBugDeathReaction", "<>c");
        }
        inline app::HornBugDeathReaction_c* create() {
            return il2cpp::create_object<app::HornBugDeathReaction_c>(get_class());
        }
    } // namespace HornBugDeathReaction_c
} // namespace app::classes::types
