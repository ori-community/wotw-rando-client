#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetFloatAction {
        namespace {
            inline app::SetFloatAction__Class* type_info_ref = nullptr;
        }
        inline app::SetFloatAction__Class** type_info = &type_info_ref;
        inline app::SetFloatAction__Class* get_class() {
            return il2cpp::get_class<app::SetFloatAction__Class>(type_info, "Moon.BehaviourSystem", "SetFloatAction");
        }
        inline app::SetFloatAction* create() {
            return il2cpp::create_object<app::SetFloatAction>(get_class());
        }
    } // namespace SetFloatAction
} // namespace app::classes::types
