#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameObjectVirtualAnimator_Context {
        inline app::GameObjectVirtualAnimator_Context__Class** type_info = (app::GameObjectVirtualAnimator_Context__Class**)(modloader::win::memory::resolve_rva(0x0472B8A8));
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
