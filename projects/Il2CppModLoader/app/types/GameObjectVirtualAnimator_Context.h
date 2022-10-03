#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameObjectVirtualAnimator_Context {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameObjectVirtualAnimator_Context__Class** type_info;
        inline app::GameObjectVirtualAnimator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::GameObjectVirtualAnimator_Context__Class>(type_info, "", "GameObjectVirtualAnimator", "Context");
        }
        inline app::GameObjectVirtualAnimator_Context* create() {
            return il2cpp::create_object<app::GameObjectVirtualAnimator_Context>(get_class());
        }
        inline app::GameObjectVirtualAnimator_Context__Boxed* box(app::GameObjectVirtualAnimator_Context value) {
            return il2cpp::box_value<app::GameObjectVirtualAnimator_Context__Boxed>(get_class(), value);
        }
    } // namespace GameObjectVirtualAnimator_Context
} // namespace app::classes::types
