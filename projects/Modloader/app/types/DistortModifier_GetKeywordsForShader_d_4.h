#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DistortModifier_GetKeywordsForShader_d_4 {
        inline app::DistortModifier_GetKeywordsForShader_d_4__Class** type_info = (app::DistortModifier_GetKeywordsForShader_d_4__Class**)(modloader::win::memory::resolve_rva(0x047127A0));
        inline app::DistortModifier_GetKeywordsForShader_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::DistortModifier_GetKeywordsForShader_d_4__Class>(type_info, "", "DistortModifier", "<GetKeywordsForShader>d__4");
        }
        inline app::DistortModifier_GetKeywordsForShader_d_4* create() {
            return il2cpp::create_object<app::DistortModifier_GetKeywordsForShader_d_4>(get_class());
        }
    } // namespace DistortModifier_GetKeywordsForShader_d_4
} // namespace app::classes::types
