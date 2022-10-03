#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleAnimationPostprocess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleAnimationPostprocess__Class** type_info;
        inline app::TentacleAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::TentacleAnimationPostprocess__Class>(type_info, "Moon", "TentacleAnimationPostprocess");
        }
        inline app::TentacleAnimationPostprocess* create() {
            return il2cpp::create_object<app::TentacleAnimationPostprocess>(get_class());
        }
    } // namespace TentacleAnimationPostprocess
} // namespace app::classes::types
