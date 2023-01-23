#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SelectedSaveValidCondition__Class.h>
#include <Modloader/app/structs/SelectedSaveValidCondition.h>

namespace app::classes::types {
    namespace SelectedSaveValidCondition {
        namespace {
            inline app::SelectedSaveValidCondition__Class* type_info_ref = nullptr;
        }
        inline app::SelectedSaveValidCondition__Class** type_info = &type_info_ref;
        inline app::SelectedSaveValidCondition__Class* get_class() {
            return il2cpp::get_class<app::SelectedSaveValidCondition__Class>(type_info, "", "SelectedSaveValidCondition");
        }
        inline app::SelectedSaveValidCondition* create() {
            return il2cpp::create_object<app::SelectedSaveValidCondition>(get_class());
        }
    } // namespace SelectedSaveValidCondition
} // namespace app::classes::types
