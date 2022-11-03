#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_SceneScreenshot {
        inline app::ShaderID_SceneScreenshot__Class** type_info = (app::ShaderID_SceneScreenshot__Class**)(modloader::win::memory::resolve_rva(0x047831D0));
        inline app::ShaderID_SceneScreenshot__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SceneScreenshot__Class>(type_info, "", "ShaderID_SceneScreenshot");
        }
        inline app::ShaderID_SceneScreenshot* create() {
            return il2cpp::create_object<app::ShaderID_SceneScreenshot>(get_class());
        }
    } // namespace ShaderID_SceneScreenshot
} // namespace app::classes::types
