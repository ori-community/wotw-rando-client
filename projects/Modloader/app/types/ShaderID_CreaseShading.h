#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CreaseShading__Class.h>
#include <Modloader/app/structs/ShaderID_CreaseShading.h>

namespace app::classes::types {
    namespace ShaderID_CreaseShading {
        inline app::ShaderID_CreaseShading__Class** type_info = (app::ShaderID_CreaseShading__Class**)(modloader::win::memory::resolve_rva(0x0476E400));
        inline app::ShaderID_CreaseShading__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CreaseShading__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_CreaseShading");
        }
        inline app::ShaderID_CreaseShading* create() {
            return il2cpp::create_object<app::ShaderID_CreaseShading>(get_class());
        }
    } // namespace ShaderID_CreaseShading
} // namespace app::classes::types
