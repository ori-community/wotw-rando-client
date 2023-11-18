#pragma once
#include <Modloader/app/structs/WaitForConditionAction_WaitAndPerform_d_4.h>
#include <Modloader/app/structs/WaitForConditionAction_WaitAndPerform_d_4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForConditionAction_WaitAndPerform_d_4 {
        inline app::WaitForConditionAction_WaitAndPerform_d_4__Class** type_info() {
            static app::WaitForConditionAction_WaitAndPerform_d_4__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitForConditionAction_WaitAndPerform_d_4__Class**)(modloader::win::memory::resolve_rva(0x0472A828));
            }
            return cache;
        }
        inline app::WaitForConditionAction_WaitAndPerform_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::WaitForConditionAction_WaitAndPerform_d_4__Class>(type_info(), "", "WaitForConditionAction", "<WaitAndPerform>d__4");
        }
        inline app::WaitForConditionAction_WaitAndPerform_d_4* create() {
            return il2cpp::create_object<app::WaitForConditionAction_WaitAndPerform_d_4>(get_class());
        }
    } // namespace WaitForConditionAction_WaitAndPerform_d_4
} // namespace app::classes::types
