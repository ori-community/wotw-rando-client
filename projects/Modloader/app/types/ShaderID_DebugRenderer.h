#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_DebugRenderer__Class.h>
#include <Modloader/app/structs/ShaderID_DebugRenderer.h>

namespace app::classes::types {
    namespace ShaderID_DebugRenderer {
        inline app::ShaderID_DebugRenderer__Class** type_info = (app::ShaderID_DebugRenderer__Class**)(modloader::win::memory::resolve_rva(0x0472C200));
        inline app::ShaderID_DebugRenderer__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DebugRenderer__Class>(type_info, "Moon.VisualDebug", "ShaderID_DebugRenderer");
        }
        inline app::ShaderID_DebugRenderer* create() {
            return il2cpp::create_object<app::ShaderID_DebugRenderer>(get_class());
        }
    } // namespace ShaderID_DebugRenderer
} // namespace app::classes::types
