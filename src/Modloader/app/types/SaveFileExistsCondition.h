#pragma once
#include <Modloader/app/structs/SaveFileExistsCondition.h>
#include <Modloader/app/structs/SaveFileExistsCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveFileExistsCondition {
        inline app::SaveFileExistsCondition__Class** type_info() {
            static app::SaveFileExistsCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveFileExistsCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveFileExistsCondition__Class* get_class() {
            return il2cpp::get_class<app::SaveFileExistsCondition__Class>(type_info(), "", "SaveFileExistsCondition");
        }
        inline app::SaveFileExistsCondition* create() {
            return il2cpp::create_object<app::SaveFileExistsCondition>(get_class());
        }
    } // namespace SaveFileExistsCondition
} // namespace app::classes::types
