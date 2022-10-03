#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeystoneDoorAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeystoneDoorAnimator__Class** type_info;
        inline app::KeystoneDoorAnimator__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorAnimator__Class>(type_info, "", "KeystoneDoorAnimator");
        }
        inline app::KeystoneDoorAnimator* create() {
            return il2cpp::create_object<app::KeystoneDoorAnimator>(get_class());
        }
    } // namespace KeystoneDoorAnimator
} // namespace app::classes::types
