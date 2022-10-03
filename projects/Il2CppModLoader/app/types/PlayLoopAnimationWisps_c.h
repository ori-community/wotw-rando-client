#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayLoopAnimationWisps_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayLoopAnimationWisps_c__Class** type_info;
        inline app::PlayLoopAnimationWisps_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayLoopAnimationWisps_c__Class>(type_info, "", "PlayLoopAnimationWisps", "<>c");
        }
        inline app::PlayLoopAnimationWisps_c* create() {
            return il2cpp::create_object<app::PlayLoopAnimationWisps_c>(get_class());
        }
    } // namespace PlayLoopAnimationWisps_c
} // namespace app::classes::types
