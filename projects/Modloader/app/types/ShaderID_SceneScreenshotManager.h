#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_SceneScreenshotManager__Class.h>
#include <Modloader/app/structs/ShaderID_SceneScreenshotManager.h>

namespace app::classes::types {
    namespace ShaderID_SceneScreenshotManager {
        inline app::ShaderID_SceneScreenshotManager__Class** type_info = (app::ShaderID_SceneScreenshotManager__Class**)(modloader::win::memory::resolve_rva(0x0476FD18));
        inline app::ShaderID_SceneScreenshotManager__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SceneScreenshotManager__Class>(type_info, "", "ShaderID_SceneScreenshotManager");
        }
        inline app::ShaderID_SceneScreenshotManager* create() {
            return il2cpp::create_object<app::ShaderID_SceneScreenshotManager>(get_class());
        }
    } // namespace ShaderID_SceneScreenshotManager
} // namespace app::classes::types
