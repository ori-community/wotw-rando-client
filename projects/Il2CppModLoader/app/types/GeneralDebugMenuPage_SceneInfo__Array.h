#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_SceneInfo__Array {
        inline app::GeneralDebugMenuPage_SceneInfo__Array__Class** type_info = (app::GeneralDebugMenuPage_SceneInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0475FD38));
        inline app::GeneralDebugMenuPage_SceneInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::GeneralDebugMenuPage_SceneInfo__Array__Class>(type_info, "", "GeneralDebugMenuPage+SceneInfo[]");
        }
        inline app::GeneralDebugMenuPage_SceneInfo__Array* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_SceneInfo__Array>(get_class());
        }
    } // namespace GeneralDebugMenuPage_SceneInfo__Array
} // namespace app::classes::types
