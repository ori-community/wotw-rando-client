#pragma once
#include <Modloader/app/structs/ScenesManager_SceneManagementMode__Enum.h>
#include <Modloader/app/structs/ScenesManager_SceneManagementMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManager_SceneManagementMode__Enum {
        inline app::ScenesManager_SceneManagementMode__Enum__Class** type_info() {
            static app::ScenesManager_SceneManagementMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManager_SceneManagementMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475BC08));
            }
            return cache;
        }
        inline app::ScenesManager_SceneManagementMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManager_SceneManagementMode__Enum__Class>(type_info(), "", "ScenesManager", "SceneManagementMode");
        }
        inline app::ScenesManager_SceneManagementMode__Enum* create() {
            return il2cpp::create_object<app::ScenesManager_SceneManagementMode__Enum>(get_class());
        }
    } // namespace ScenesManager_SceneManagementMode__Enum
} // namespace app::classes::types
