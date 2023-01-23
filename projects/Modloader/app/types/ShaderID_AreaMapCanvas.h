#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_AreaMapCanvas__Class.h>
#include <Modloader/app/structs/ShaderID_AreaMapCanvas.h>

namespace app::classes::types {
    namespace ShaderID_AreaMapCanvas {
        inline app::ShaderID_AreaMapCanvas__Class** type_info = (app::ShaderID_AreaMapCanvas__Class**)(modloader::win::memory::resolve_rva(0x0475B0B0));
        inline app::ShaderID_AreaMapCanvas__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AreaMapCanvas__Class>(type_info, "", "ShaderID_AreaMapCanvas");
        }
        inline app::ShaderID_AreaMapCanvas* create() {
            return il2cpp::create_object<app::ShaderID_AreaMapCanvas>(get_class());
        }
    } // namespace ShaderID_AreaMapCanvas
} // namespace app::classes::types
