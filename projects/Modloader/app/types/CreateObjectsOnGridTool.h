#pragma once
#include <Modloader/app/structs/CreateObjectsOnGridTool.h>
#include <Modloader/app/structs/CreateObjectsOnGridTool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateObjectsOnGridTool {
        inline app::CreateObjectsOnGridTool__Class** type_info() {
            static app::CreateObjectsOnGridTool__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreateObjectsOnGridTool__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreateObjectsOnGridTool__Class* get_class() {
            return il2cpp::get_class<app::CreateObjectsOnGridTool__Class>(type_info(), "", "CreateObjectsOnGridTool");
        }
        inline app::CreateObjectsOnGridTool* create() {
            return il2cpp::create_object<app::CreateObjectsOnGridTool>(get_class());
        }
    } // namespace CreateObjectsOnGridTool
} // namespace app::classes::types
