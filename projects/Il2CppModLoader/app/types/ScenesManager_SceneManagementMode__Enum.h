#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManager_SceneManagementMode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManager_SceneManagementMode__Enum__Class** type_info;
        inline app::ScenesManager_SceneManagementMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManager_SceneManagementMode__Enum__Class>(type_info, "", "ScenesManager", "SceneManagementMode");
        }
        inline app::ScenesManager_SceneManagementMode__Enum* create() {
            return il2cpp::create_object<app::ScenesManager_SceneManagementMode__Enum>(get_class());
        }
    } // namespace ScenesManager_SceneManagementMode__Enum
} // namespace app::classes::types
