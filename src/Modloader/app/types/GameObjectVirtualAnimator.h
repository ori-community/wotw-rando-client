#pragma once
#include <Modloader/app/structs/GameObjectVirtualAnimator.h>
#include <Modloader/app/structs/GameObjectVirtualAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameObjectVirtualAnimator {
        inline app::GameObjectVirtualAnimator__Class** type_info() {
            static app::GameObjectVirtualAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameObjectVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x0477E4A8));
            }
            return cache;
        }
        inline app::GameObjectVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::GameObjectVirtualAnimator__Class>(type_info(), "", "GameObjectVirtualAnimator");
        }
        inline app::GameObjectVirtualAnimator* create() {
            return il2cpp::create_object<app::GameObjectVirtualAnimator>(get_class());
        }
    } // namespace GameObjectVirtualAnimator
} // namespace app::classes::types
