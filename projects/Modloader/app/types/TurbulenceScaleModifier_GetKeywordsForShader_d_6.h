#pragma once
#include <Modloader/app/structs/TurbulenceScaleModifier_GetKeywordsForShader_d_6.h>
#include <Modloader/app/structs/TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceScaleModifier_GetKeywordsForShader_d_6 {
        inline app::TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class** type_info() {
            static app::TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class**)(modloader::win::memory::resolve_rva(0x0476A248));
            }
            return cache;
        }
        inline app::TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class* get_class() {
            return il2cpp::get_nested_class<app::TurbulenceScaleModifier_GetKeywordsForShader_d_6__Class>(type_info(), "", "TurbulenceScaleModifier", "<GetKeywordsForShader>d__6");
        }
        inline app::TurbulenceScaleModifier_GetKeywordsForShader_d_6* create() {
            return il2cpp::create_object<app::TurbulenceScaleModifier_GetKeywordsForShader_d_6>(get_class());
        }
    } // namespace TurbulenceScaleModifier_GetKeywordsForShader_d_6
} // namespace app::classes::types
