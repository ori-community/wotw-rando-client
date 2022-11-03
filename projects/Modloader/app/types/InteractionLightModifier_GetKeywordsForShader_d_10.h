#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionLightModifier_GetKeywordsForShader_d_10 {
        inline app::InteractionLightModifier_GetKeywordsForShader_d_10__Class** type_info = (app::InteractionLightModifier_GetKeywordsForShader_d_10__Class**)(modloader::win::memory::resolve_rva(0x04739C20));
        inline app::InteractionLightModifier_GetKeywordsForShader_d_10__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionLightModifier_GetKeywordsForShader_d_10__Class>(type_info, "", "InteractionLightModifier", "<GetKeywordsForShader>d__10");
        }
        inline app::InteractionLightModifier_GetKeywordsForShader_d_10* create() {
            return il2cpp::create_object<app::InteractionLightModifier_GetKeywordsForShader_d_10>(get_class());
        }
    } // namespace InteractionLightModifier_GetKeywordsForShader_d_10
} // namespace app::classes::types
