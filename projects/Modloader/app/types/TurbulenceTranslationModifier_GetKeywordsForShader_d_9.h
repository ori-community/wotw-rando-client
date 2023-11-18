#pragma once
#include <Modloader/app/structs/TurbulenceTranslationModifier_GetKeywordsForShader_d_9.h>
#include <Modloader/app/structs/TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceTranslationModifier_GetKeywordsForShader_d_9 {
        inline app::TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class** type_info() {
            static app::TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class**)(modloader::win::memory::resolve_rva(0x047588D0));
            }
            return cache;
        }
        inline app::TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class* get_class() {
            return il2cpp::get_nested_class<app::TurbulenceTranslationModifier_GetKeywordsForShader_d_9__Class>(type_info(), "", "TurbulenceTranslationModifier", "<GetKeywordsForShader>d__9");
        }
        inline app::TurbulenceTranslationModifier_GetKeywordsForShader_d_9* create() {
            return il2cpp::create_object<app::TurbulenceTranslationModifier_GetKeywordsForShader_d_9>(get_class());
        }
    } // namespace TurbulenceTranslationModifier_GetKeywordsForShader_d_9
} // namespace app::classes::types
