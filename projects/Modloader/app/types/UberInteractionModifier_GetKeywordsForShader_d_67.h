#pragma once
#include <Modloader/app/structs/UberInteractionModifier_GetKeywordsForShader_d_67.h>
#include <Modloader/app/structs/UberInteractionModifier_GetKeywordsForShader_d_67__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionModifier_GetKeywordsForShader_d_67 {
        inline app::UberInteractionModifier_GetKeywordsForShader_d_67__Class** type_info() {
            static app::UberInteractionModifier_GetKeywordsForShader_d_67__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionModifier_GetKeywordsForShader_d_67__Class**)(modloader::win::memory::resolve_rva(0x04771660));
            }
            return cache;
        }
        inline app::UberInteractionModifier_GetKeywordsForShader_d_67__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionModifier_GetKeywordsForShader_d_67__Class>(type_info(), "", "UberInteractionModifier", "<GetKeywordsForShader>d__67");
        }
        inline app::UberInteractionModifier_GetKeywordsForShader_d_67* create() {
            return il2cpp::create_object<app::UberInteractionModifier_GetKeywordsForShader_d_67>(get_class());
        }
    } // namespace UberInteractionModifier_GetKeywordsForShader_d_67
} // namespace app::classes::types
