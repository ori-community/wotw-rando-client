#pragma once
#include <Modloader/app/structs/ShaderID_UberWaterEdge.h>
#include <Modloader/app/structs/ShaderID_UberWaterEdge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_UberWaterEdge {
        inline app::ShaderID_UberWaterEdge__Class** type_info() {
            static app::ShaderID_UberWaterEdge__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_UberWaterEdge__Class**)(modloader::win::memory::resolve_rva(0x0478E250));
            }
            return cache;
        }
        inline app::ShaderID_UberWaterEdge__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberWaterEdge__Class>(type_info(), "", "ShaderID_UberWaterEdge");
        }
        inline app::ShaderID_UberWaterEdge* create() {
            return il2cpp::create_object<app::ShaderID_UberWaterEdge>(get_class());
        }
    } // namespace ShaderID_UberWaterEdge
} // namespace app::classes::types
