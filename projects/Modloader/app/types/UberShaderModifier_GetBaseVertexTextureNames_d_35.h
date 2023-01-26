#pragma once
#include <Modloader/app/structs/UberShaderModifier_GetBaseVertexTextureNames_d_35.h>
#include <Modloader/app/structs/UberShaderModifier_GetBaseVertexTextureNames_d_35__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderModifier_GetBaseVertexTextureNames_d_35 {
        inline app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class** type_info() {
            static app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class**)(modloader::win::memory::resolve_rva(0x04732310));
            }
            return cache;
        }
        inline app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderModifier_GetBaseVertexTextureNames_d_35__Class>(type_info(), "", "UberShaderModifier", "<GetBaseVertexTextureNames>d__35");
        }
        inline app::UberShaderModifier_GetBaseVertexTextureNames_d_35* create() {
            return il2cpp::create_object<app::UberShaderModifier_GetBaseVertexTextureNames_d_35>(get_class());
        }
    } // namespace UberShaderModifier_GetBaseVertexTextureNames_d_35
} // namespace app::classes::types
