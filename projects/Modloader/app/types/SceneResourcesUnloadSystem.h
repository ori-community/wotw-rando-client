#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneResourcesUnloadSystem {
        inline app::SceneResourcesUnloadSystem__Class** type_info = (app::SceneResourcesUnloadSystem__Class**)(modloader::win::memory::resolve_rva(0x0475AA18));
        inline app::SceneResourcesUnloadSystem__Class* get_class() {
            return il2cpp::get_class<app::SceneResourcesUnloadSystem__Class>(type_info, "", "SceneResourcesUnloadSystem");
        }
        inline app::SceneResourcesUnloadSystem* create() {
            return il2cpp::create_object<app::SceneResourcesUnloadSystem>(get_class());
        }
    } // namespace SceneResourcesUnloadSystem
} // namespace app::classes::types
