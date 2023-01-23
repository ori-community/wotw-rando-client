#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Class.h>
#include <Modloader/app/structs/TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5.h>

namespace app::classes::types {
    namespace TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5 {
        inline app::TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Class** type_info = (app::TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Class**)(modloader::win::memory::resolve_rva(0x047320D0));
        inline app::TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Class* get_class() {
            return il2cpp::get_nested_class<app::TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5__Class>(type_info, "", "TurbulenceScaleModifier", "<GetBaseVertexTextureNames>d__5");
        }
        inline app::TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5* create() {
            return il2cpp::create_object<app::TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5>(get_class());
        }
    } // namespace TurbulenceScaleModifier_GetBaseVertexTextureNames_d_5
} // namespace app::classes::types
