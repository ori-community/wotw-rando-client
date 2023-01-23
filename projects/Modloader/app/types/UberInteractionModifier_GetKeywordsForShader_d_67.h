#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberInteractionModifier_GetKeywordsForShader_d_67__Class.h>
#include <Modloader/app/structs/UberInteractionModifier_GetKeywordsForShader_d_67.h>

namespace app::classes::types {
    namespace UberInteractionModifier_GetKeywordsForShader_d_67 {
        inline app::UberInteractionModifier_GetKeywordsForShader_d_67__Class** type_info = (app::UberInteractionModifier_GetKeywordsForShader_d_67__Class**)(modloader::win::memory::resolve_rva(0x04771660));
        inline app::UberInteractionModifier_GetKeywordsForShader_d_67__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionModifier_GetKeywordsForShader_d_67__Class>(type_info, "", "UberInteractionModifier", "<GetKeywordsForShader>d__67");
        }
        inline app::UberInteractionModifier_GetKeywordsForShader_d_67* create() {
            return il2cpp::create_object<app::UberInteractionModifier_GetKeywordsForShader_d_67>(get_class());
        }
    } // namespace UberInteractionModifier_GetKeywordsForShader_d_67
} // namespace app::classes::types
