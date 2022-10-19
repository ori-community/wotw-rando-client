#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateSceneTool {
        namespace {
            inline app::CreateSceneTool__Class* type_info_ref = nullptr;
        }
        inline app::CreateSceneTool__Class** type_info = &type_info_ref;
        inline app::CreateSceneTool__Class* get_class() {
            return il2cpp::get_class<app::CreateSceneTool__Class>(type_info, "", "CreateSceneTool");
        }
        inline app::CreateSceneTool* create() {
            return il2cpp::create_object<app::CreateSceneTool>(get_class());
        }
    } // namespace CreateSceneTool
} // namespace app::classes::types
