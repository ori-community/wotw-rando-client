#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneManagementSystem_c_DisplayClass23_0__Class.h>
#include <Modloader/app/structs/SceneManagementSystem_c_DisplayClass23_0.h>

namespace app::classes::types {
    namespace SceneManagementSystem_c_DisplayClass23_0 {
        inline app::SceneManagementSystem_c_DisplayClass23_0__Class** type_info = (app::SceneManagementSystem_c_DisplayClass23_0__Class**)(modloader::win::memory::resolve_rva(0x0473A980));
        inline app::SceneManagementSystem_c_DisplayClass23_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneManagementSystem_c_DisplayClass23_0__Class>(type_info, "Moon.Timeline.Systems", "SceneManagementSystem", "<>c__DisplayClass23_0");
        }
        inline app::SceneManagementSystem_c_DisplayClass23_0* create() {
            return il2cpp::create_object<app::SceneManagementSystem_c_DisplayClass23_0>(get_class());
        }
    } // namespace SceneManagementSystem_c_DisplayClass23_0
} // namespace app::classes::types
