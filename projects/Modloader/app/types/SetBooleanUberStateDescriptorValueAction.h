#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetBooleanUberStateDescriptorValueAction__Class.h>
#include <Modloader/app/structs/SetBooleanUberStateDescriptorValueAction.h>

namespace app::classes::types {
    namespace SetBooleanUberStateDescriptorValueAction {
        namespace {
            inline app::SetBooleanUberStateDescriptorValueAction__Class* type_info_ref = nullptr;
        }
        inline app::SetBooleanUberStateDescriptorValueAction__Class** type_info = &type_info_ref;
        inline app::SetBooleanUberStateDescriptorValueAction__Class* get_class() {
            return il2cpp::get_class<app::SetBooleanUberStateDescriptorValueAction__Class>(type_info, "", "SetBooleanUberStateDescriptorValueAction");
        }
        inline app::SetBooleanUberStateDescriptorValueAction* create() {
            return il2cpp::create_object<app::SetBooleanUberStateDescriptorValueAction>(get_class());
        }
    } // namespace SetBooleanUberStateDescriptorValueAction
} // namespace app::classes::types
