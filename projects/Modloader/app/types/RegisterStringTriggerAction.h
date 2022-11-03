#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegisterStringTriggerAction {
        namespace {
            inline app::RegisterStringTriggerAction__Class* type_info_ref = nullptr;
        }
        inline app::RegisterStringTriggerAction__Class** type_info = &type_info_ref;
        inline app::RegisterStringTriggerAction__Class* get_class() {
            return il2cpp::get_class<app::RegisterStringTriggerAction__Class>(type_info, "", "RegisterStringTriggerAction");
        }
        inline app::RegisterStringTriggerAction* create() {
            return il2cpp::create_object<app::RegisterStringTriggerAction>(get_class());
        }
    } // namespace RegisterStringTriggerAction
} // namespace app::classes::types
