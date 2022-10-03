#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatDeathReaction_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBatDeathReaction_c__Class** type_info;
        inline app::SpiderBatDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatDeathReaction_c__Class>(type_info, "", "SpiderBatDeathReaction", "<>c");
        }
        inline app::SpiderBatDeathReaction_c* create() {
            return il2cpp::create_object<app::SpiderBatDeathReaction_c>(get_class());
        }
    } // namespace SpiderBatDeathReaction_c
} // namespace app::classes::types
