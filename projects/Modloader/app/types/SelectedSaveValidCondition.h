#pragma once
#include <Modloader/app/structs/SelectedSaveValidCondition.h>
#include <Modloader/app/structs/SelectedSaveValidCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SelectedSaveValidCondition {
        inline app::SelectedSaveValidCondition__Class** type_info() {
            static app::SelectedSaveValidCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SelectedSaveValidCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SelectedSaveValidCondition__Class* get_class() {
            return il2cpp::get_class<app::SelectedSaveValidCondition__Class>(type_info(), "", "SelectedSaveValidCondition");
        }
        inline app::SelectedSaveValidCondition* create() {
            return il2cpp::create_object<app::SelectedSaveValidCondition>(get_class());
        }
    } // namespace SelectedSaveValidCondition
} // namespace app::classes::types
