#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurbulenceRotationModifier_GetKeywordsForShader_d_13 {
        inline app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class** type_info = (app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class**)(modloader::win::memory::resolve_rva(0x0478B880));
        inline app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class* get_class() {
            return il2cpp::get_nested_class<app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class>(type_info, "", "TurbulenceRotationModifier", "<GetKeywordsForShader>d__13");
        }
        inline app::TurbulenceRotationModifier_GetKeywordsForShader_d_13* create() {
            return il2cpp::create_object<app::TurbulenceRotationModifier_GetKeywordsForShader_d_13>(get_class());
        }
    } // namespace TurbulenceRotationModifier_GetKeywordsForShader_d_13
} // namespace app::classes::types
