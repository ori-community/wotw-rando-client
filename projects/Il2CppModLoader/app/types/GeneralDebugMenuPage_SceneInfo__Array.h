#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_SceneInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GeneralDebugMenuPage_SceneInfo__Array__Class** type_info;
        inline app::GeneralDebugMenuPage_SceneInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::GeneralDebugMenuPage_SceneInfo__Array__Class>(type_info, "", "GeneralDebugMenuPage+SceneInfo[]");
        }
        inline app::GeneralDebugMenuPage_SceneInfo__Array* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_SceneInfo__Array>(get_class());
        }
    } // namespace GeneralDebugMenuPage_SceneInfo__Array
} // namespace app::classes::types
