#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatHitReaction_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBatHitReaction_c__Class** type_info;
        inline app::SpiderBatHitReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatHitReaction_c__Class>(type_info, "", "SpiderBatHitReaction", "<>c");
        }
        inline app::SpiderBatHitReaction_c* create() {
            return il2cpp::create_object<app::SpiderBatHitReaction_c>(get_class());
        }
    } // namespace SpiderBatHitReaction_c
} // namespace app::classes::types
