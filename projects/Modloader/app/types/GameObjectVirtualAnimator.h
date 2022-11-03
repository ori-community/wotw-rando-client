#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameObjectVirtualAnimator {
        inline app::GameObjectVirtualAnimator__Class** type_info = (app::GameObjectVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x0477E4A8));
        inline app::GameObjectVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::GameObjectVirtualAnimator__Class>(type_info, "", "GameObjectVirtualAnimator");
        }
        inline app::GameObjectVirtualAnimator* create() {
            return il2cpp::create_object<app::GameObjectVirtualAnimator>(get_class());
        }
    } // namespace GameObjectVirtualAnimator
} // namespace app::classes::types
