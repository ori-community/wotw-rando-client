#pragma once
#include <Modloader/app/structs/GeneralDebugMenuPage_SceneInfo__Array.h>
#include <Modloader/app/structs/GeneralDebugMenuPage_SceneInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_SceneInfo__Array {
        inline app::GeneralDebugMenuPage_SceneInfo__Array__Class** type_info() {
            static app::GeneralDebugMenuPage_SceneInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GeneralDebugMenuPage_SceneInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0475FD38));
            }
            return cache;
        }
        inline app::GeneralDebugMenuPage_SceneInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::GeneralDebugMenuPage_SceneInfo__Array__Class>(type_info(), "", "GeneralDebugMenuPage+SceneInfo[]");
        }
        inline app::GeneralDebugMenuPage_SceneInfo__Array* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_SceneInfo__Array>(get_class());
        }
    } // namespace GeneralDebugMenuPage_SceneInfo__Array
} // namespace app::classes::types
