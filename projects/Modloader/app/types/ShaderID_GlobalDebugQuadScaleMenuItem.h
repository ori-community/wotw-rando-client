#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_GlobalDebugQuadScaleMenuItem {
        inline app::ShaderID_GlobalDebugQuadScaleMenuItem__Class** type_info = (app::ShaderID_GlobalDebugQuadScaleMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047338A8));
        inline app::ShaderID_GlobalDebugQuadScaleMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GlobalDebugQuadScaleMenuItem__Class>(type_info, "", "ShaderID_GlobalDebugQuadScaleMenuItem");
        }
        inline app::ShaderID_GlobalDebugQuadScaleMenuItem* create() {
            return il2cpp::create_object<app::ShaderID_GlobalDebugQuadScaleMenuItem>(get_class());
        }
    } // namespace ShaderID_GlobalDebugQuadScaleMenuItem
} // namespace app::classes::types
