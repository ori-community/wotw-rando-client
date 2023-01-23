#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandTrailModifier_GetKeywordsForShader_d_4__Class.h>
#include <Modloader/app/structs/SandTrailModifier_GetKeywordsForShader_d_4.h>

namespace app::classes::types {
    namespace SandTrailModifier_GetKeywordsForShader_d_4 {
        inline app::SandTrailModifier_GetKeywordsForShader_d_4__Class** type_info = (app::SandTrailModifier_GetKeywordsForShader_d_4__Class**)(modloader::win::memory::resolve_rva(0x04718860));
        inline app::SandTrailModifier_GetKeywordsForShader_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::SandTrailModifier_GetKeywordsForShader_d_4__Class>(type_info, "", "SandTrailModifier", "<GetKeywordsForShader>d__4");
        }
        inline app::SandTrailModifier_GetKeywordsForShader_d_4* create() {
            return il2cpp::create_object<app::SandTrailModifier_GetKeywordsForShader_d_4>(get_class());
        }
    } // namespace SandTrailModifier_GetKeywordsForShader_d_4
} // namespace app::classes::types
