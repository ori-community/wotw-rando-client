#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneManagementSystem_SceneLoadedState__Class.h>
#include <Modloader/app/structs/SceneManagementSystem_SceneLoadedState.h>
#include <Modloader/app/structs/SceneManagementSystem_SceneLoadedState__Array.h>

namespace app::classes::types {
    namespace SceneManagementSystem_SceneLoadedState {
        inline app::SceneManagementSystem_SceneLoadedState__Class** type_info = (app::SceneManagementSystem_SceneLoadedState__Class**)(modloader::win::memory::resolve_rva(0x0470F388));
        inline app::SceneManagementSystem_SceneLoadedState__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneManagementSystem_SceneLoadedState__Class>(type_info, "Moon.Timeline.Systems", "SceneManagementSystem", "SceneLoadedState");
        }
        inline app::SceneManagementSystem_SceneLoadedState* create() {
            return il2cpp::create_object<app::SceneManagementSystem_SceneLoadedState>(get_class());
        }
        inline app::SceneManagementSystem_SceneLoadedState__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneManagementSystem_SceneLoadedState__Array>(get_class(), size);
        }
        inline app::SceneManagementSystem_SceneLoadedState__Array* create_array(const std::vector<app::SceneManagementSystem_SceneLoadedState*>& items) {
            return il2cpp::array_new<app::SceneManagementSystem_SceneLoadedState__Array>(get_class(), items);
        }
    } // namespace SceneManagementSystem_SceneLoadedState
} // namespace app::classes::types
