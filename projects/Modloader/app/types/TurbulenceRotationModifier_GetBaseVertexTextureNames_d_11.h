#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Class.h>
#include <Modloader/app/structs/TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11.h>

namespace app::classes::types {
    namespace TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11 {
        inline app::TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Class** type_info = (app::TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Class**)(modloader::win::memory::resolve_rva(0x0472DC90));
        inline app::TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Class* get_class() {
            return il2cpp::get_nested_class<app::TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11__Class>(type_info, "", "TurbulenceRotationModifier", "<GetBaseVertexTextureNames>d__11");
        }
        inline app::TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11* create() {
            return il2cpp::create_object<app::TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11>(get_class());
        }
    } // namespace TurbulenceRotationModifier_GetBaseVertexTextureNames_d_11
} // namespace app::classes::types
