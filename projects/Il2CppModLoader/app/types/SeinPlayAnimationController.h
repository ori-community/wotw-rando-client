#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPlayAnimationController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinPlayAnimationController__Class** type_info;
        inline app::SeinPlayAnimationController__Class* get_class() {
            return il2cpp::get_class<app::SeinPlayAnimationController__Class>(type_info, "", "SeinPlayAnimationController");
        }
        inline app::SeinPlayAnimationController* create() {
            return il2cpp::create_object<app::SeinPlayAnimationController>(get_class());
        }
    } // namespace SeinPlayAnimationController
} // namespace app::classes::types
