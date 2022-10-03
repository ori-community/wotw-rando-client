#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderlingDeathReaction_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderlingDeathReaction_c__Class** type_info;
        inline app::SpiderlingDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderlingDeathReaction_c__Class>(type_info, "", "SpiderlingDeathReaction", "<>c");
        }
        inline app::SpiderlingDeathReaction_c* create() {
            return il2cpp::create_object<app::SpiderlingDeathReaction_c>(get_class());
        }
    } // namespace SpiderlingDeathReaction_c
} // namespace app::classes::types
