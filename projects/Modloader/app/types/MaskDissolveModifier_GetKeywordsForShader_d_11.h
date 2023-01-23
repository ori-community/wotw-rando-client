#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaskDissolveModifier_GetKeywordsForShader_d_11__Class.h>
#include <Modloader/app/structs/MaskDissolveModifier_GetKeywordsForShader_d_11.h>

namespace app::classes::types {
    namespace MaskDissolveModifier_GetKeywordsForShader_d_11 {
        inline app::MaskDissolveModifier_GetKeywordsForShader_d_11__Class** type_info = (app::MaskDissolveModifier_GetKeywordsForShader_d_11__Class**)(modloader::win::memory::resolve_rva(0x0472A820));
        inline app::MaskDissolveModifier_GetKeywordsForShader_d_11__Class* get_class() {
            return il2cpp::get_nested_class<app::MaskDissolveModifier_GetKeywordsForShader_d_11__Class>(type_info, "", "MaskDissolveModifier", "<GetKeywordsForShader>d__11");
        }
        inline app::MaskDissolveModifier_GetKeywordsForShader_d_11* create() {
            return il2cpp::create_object<app::MaskDissolveModifier_GetKeywordsForShader_d_11>(get_class());
        }
    } // namespace MaskDissolveModifier_GetKeywordsForShader_d_11
} // namespace app::classes::types
