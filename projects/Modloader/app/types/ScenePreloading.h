#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenePreloading {
        inline app::ScenePreloading__Class** type_info = (app::ScenePreloading__Class**)(modloader::win::memory::resolve_rva(0x0471CEE0));
        inline app::ScenePreloading__Class* get_class() {
            return il2cpp::get_class<app::ScenePreloading__Class>(type_info, "Moon.Timeline", "ScenePreloading");
        }
        inline app::ScenePreloading* create() {
            return il2cpp::create_object<app::ScenePreloading>(get_class());
        }
    } // namespace ScenePreloading
} // namespace app::classes::types
