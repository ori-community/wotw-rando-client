#pragma once
#include <Modloader/app/structs/SceneResourcesUnloadSystem.h>
#include <Modloader/app/structs/SceneResourcesUnloadSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneResourcesUnloadSystem {
        inline app::SceneResourcesUnloadSystem__Class** type_info() {
            static app::SceneResourcesUnloadSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneResourcesUnloadSystem__Class**)(modloader::win::memory::resolve_rva(0x0475AA18));
            }
            return cache;
        }
        inline app::SceneResourcesUnloadSystem__Class* get_class() {
            return il2cpp::get_class<app::SceneResourcesUnloadSystem__Class>(type_info(), "", "SceneResourcesUnloadSystem");
        }
        inline app::SceneResourcesUnloadSystem* create() {
            return il2cpp::create_object<app::SceneResourcesUnloadSystem>(get_class());
        }
    } // namespace SceneResourcesUnloadSystem
} // namespace app::classes::types
