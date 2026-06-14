#pragma once
#include <Modloader/app/structs/ShowPagesFinishedCondition.h>
#include <Modloader/app/structs/ShowPagesFinishedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowPagesFinishedCondition {
        inline app::ShowPagesFinishedCondition__Class** type_info() {
            static app::ShowPagesFinishedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowPagesFinishedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowPagesFinishedCondition__Class* get_class() {
            return il2cpp::get_class<app::ShowPagesFinishedCondition__Class>(type_info(), "", "ShowPagesFinishedCondition");
        }
        inline app::ShowPagesFinishedCondition* create() {
            return il2cpp::create_object<app::ShowPagesFinishedCondition>(get_class());
        }
    } // namespace ShowPagesFinishedCondition
} // namespace app::classes::types
