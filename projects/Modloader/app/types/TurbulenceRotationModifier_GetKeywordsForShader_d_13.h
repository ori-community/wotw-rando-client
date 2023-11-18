#pragma once
#include <Modloader/app/structs/TurbulenceRotationModifier_GetKeywordsForShader_d_13.h>
#include <Modloader/app/structs/TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceRotationModifier_GetKeywordsForShader_d_13 {
        inline app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class** type_info() {
            static app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class**)(modloader::win::memory::resolve_rva(0x0478B880));
            }
            return cache;
        }
        inline app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class* get_class() {
            return il2cpp::get_nested_class<app::TurbulenceRotationModifier_GetKeywordsForShader_d_13__Class>(type_info(), "", "TurbulenceRotationModifier", "<GetKeywordsForShader>d__13");
        }
        inline app::TurbulenceRotationModifier_GetKeywordsForShader_d_13* create() {
            return il2cpp::create_object<app::TurbulenceRotationModifier_GetKeywordsForShader_d_13>(get_class());
        }
    } // namespace TurbulenceRotationModifier_GetKeywordsForShader_d_13
} // namespace app::classes::types
