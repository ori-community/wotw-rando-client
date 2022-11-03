#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8 {
        inline app::TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Class** type_info = (app::TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Class**)(modloader::win::memory::resolve_rva(0x0475D4F0));
        inline app::TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Class* get_class() {
            return il2cpp::get_nested_class<app::TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8__Class>(type_info, "", "TurbulenceTranslationModifier", "<GetBaseVertexTextureNames>d__8");
        }
        inline app::TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8* create() {
            return il2cpp::create_object<app::TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8>(get_class());
        }
    } // namespace TurbulenceTranslationModifier_GetBaseVertexTextureNames_d_8
} // namespace app::classes::types
