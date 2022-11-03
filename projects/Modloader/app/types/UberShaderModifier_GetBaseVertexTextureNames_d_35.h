#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderModifier_GetBaseVertexTextureNames_d_35 {
        inline app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class** type_info = (app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class**)(modloader::win::memory::resolve_rva(0x04732310));
        inline app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class>(type_info, "", "UberShaderModifier", "<GetBaseVertexTextureNames>d__35");
        }
        inline app::UberShaderModifier_GetBaseVertexTextureNames_d_35* create() {
            return il2cpp::create_object<app::UberShaderModifier_GetBaseVertexTextureNames_d_35>(get_class());
        }
    } // namespace UberShaderModifier_GetBaseVertexTextureNames_d_35
} // namespace app::classes::types
