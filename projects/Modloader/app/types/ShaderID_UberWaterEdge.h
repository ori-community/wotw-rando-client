#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_UberWaterEdge {
        inline app::ShaderID_UberWaterEdge__Class** type_info = (app::ShaderID_UberWaterEdge__Class**)(modloader::win::memory::resolve_rva(0x0478E250));
        inline app::ShaderID_UberWaterEdge__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberWaterEdge__Class>(type_info, "", "ShaderID_UberWaterEdge");
        }
        inline app::ShaderID_UberWaterEdge* create() {
            return il2cpp::create_object<app::ShaderID_UberWaterEdge>(get_class());
        }
    } // namespace ShaderID_UberWaterEdge
} // namespace app::classes::types
