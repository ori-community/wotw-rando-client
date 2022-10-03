#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererHandRewardBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WandererHandRewardBehaviour_c__Class** type_info;
        inline app::WandererHandRewardBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererHandRewardBehaviour_c__Class>(type_info, "Moon", "WandererHandRewardBehaviour", "<>c");
        }
        inline app::WandererHandRewardBehaviour_c* create() {
            return il2cpp::create_object<app::WandererHandRewardBehaviour_c>(get_class());
        }
    } // namespace WandererHandRewardBehaviour_c
} // namespace app::classes::types
