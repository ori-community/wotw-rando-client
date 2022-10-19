#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateObjectsOnGridTool {
        namespace {
            inline app::CreateObjectsOnGridTool__Class* type_info_ref = nullptr;
        }
        inline app::CreateObjectsOnGridTool__Class** type_info = &type_info_ref;
        inline app::CreateObjectsOnGridTool__Class* get_class() {
            return il2cpp::get_class<app::CreateObjectsOnGridTool__Class>(type_info, "", "CreateObjectsOnGridTool");
        }
        inline app::CreateObjectsOnGridTool* create() {
            return il2cpp::create_object<app::CreateObjectsOnGridTool>(get_class());
        }
    } // namespace CreateObjectsOnGridTool
} // namespace app::classes::types
