#pragma once
#include <Modloader/app/structs/CompareSeinLevelCondition.h>
#include <Modloader/app/structs/CompareSeinLevelCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompareSeinLevelCondition {
        inline app::CompareSeinLevelCondition__Class** type_info() {
            static app::CompareSeinLevelCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompareSeinLevelCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompareSeinLevelCondition__Class* get_class() {
            return il2cpp::get_class<app::CompareSeinLevelCondition__Class>(type_info(), "", "CompareSeinLevelCondition");
        }
        inline app::CompareSeinLevelCondition* create() {
            return il2cpp::create_object<app::CompareSeinLevelCondition>(get_class());
        }
    } // namespace CompareSeinLevelCondition
} // namespace app::classes::types
