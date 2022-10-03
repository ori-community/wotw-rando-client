#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoorAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DoorAnimator__Class** type_info;
        inline app::DoorAnimator__Class* get_class() {
            return il2cpp::get_class<app::DoorAnimator__Class>(type_info, "", "DoorAnimator");
        }
        inline app::DoorAnimator* create() {
            return il2cpp::create_object<app::DoorAnimator>(get_class());
        }
    } // namespace DoorAnimator
} // namespace app::classes::types
