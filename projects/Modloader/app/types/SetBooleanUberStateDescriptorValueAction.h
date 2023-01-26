#pragma once
#include <Modloader/app/structs/SetBooleanUberStateDescriptorValueAction.h>
#include <Modloader/app/structs/SetBooleanUberStateDescriptorValueAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetBooleanUberStateDescriptorValueAction {
        inline app::SetBooleanUberStateDescriptorValueAction__Class** type_info() {
            static app::SetBooleanUberStateDescriptorValueAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetBooleanUberStateDescriptorValueAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetBooleanUberStateDescriptorValueAction__Class* get_class() {
            return il2cpp::get_class<app::SetBooleanUberStateDescriptorValueAction__Class>(type_info(), "", "SetBooleanUberStateDescriptorValueAction");
        }
        inline app::SetBooleanUberStateDescriptorValueAction* create() {
            return il2cpp::create_object<app::SetBooleanUberStateDescriptorValueAction>(get_class());
        }
    } // namespace SetBooleanUberStateDescriptorValueAction
} // namespace app::classes::types
