#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectVirtualAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameObjectVirtualAnimator__Class** type_info;
        inline app::GameObjectVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::GameObjectVirtualAnimator__Class>(type_info, "", "GameObjectVirtualAnimator");
        }
        inline app::GameObjectVirtualAnimator* create() {
            return il2cpp::create_object<app::GameObjectVirtualAnimator>(get_class());
        }
    } // namespace GameObjectVirtualAnimator
} // namespace app::classes::types
