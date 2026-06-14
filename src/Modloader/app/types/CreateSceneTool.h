#pragma once
#include <Modloader/app/structs/CreateSceneTool.h>
#include <Modloader/app/structs/CreateSceneTool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateSceneTool {
        inline app::CreateSceneTool__Class** type_info() {
            static app::CreateSceneTool__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreateSceneTool__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreateSceneTool__Class* get_class() {
            return il2cpp::get_class<app::CreateSceneTool__Class>(type_info(), "", "CreateSceneTool");
        }
        inline app::CreateSceneTool* create() {
            return il2cpp::create_object<app::CreateSceneTool>(get_class());
        }
    } // namespace CreateSceneTool
} // namespace app::classes::types
