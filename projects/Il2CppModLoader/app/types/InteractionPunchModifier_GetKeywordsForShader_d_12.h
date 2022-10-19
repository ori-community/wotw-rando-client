#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionPunchModifier_GetKeywordsForShader_d_12 {
        inline app::InteractionPunchModifier_GetKeywordsForShader_d_12__Class** type_info = (app::InteractionPunchModifier_GetKeywordsForShader_d_12__Class**)(modloader::win::memory::resolve_rva(0x047485C0));
        inline app::InteractionPunchModifier_GetKeywordsForShader_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionPunchModifier_GetKeywordsForShader_d_12__Class>(type_info, "", "InteractionPunchModifier", "<GetKeywordsForShader>d__12");
        }
        inline app::InteractionPunchModifier_GetKeywordsForShader_d_12* create() {
            return il2cpp::create_object<app::InteractionPunchModifier_GetKeywordsForShader_d_12>(get_class());
        }
    } // namespace InteractionPunchModifier_GetKeywordsForShader_d_12
} // namespace app::classes::types
