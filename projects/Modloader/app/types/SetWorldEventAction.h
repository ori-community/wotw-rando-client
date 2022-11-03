#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetWorldEventAction {
        namespace {
            inline app::SetWorldEventAction__Class* type_info_ref = nullptr;
        }
        inline app::SetWorldEventAction__Class** type_info = &type_info_ref;
        inline app::SetWorldEventAction__Class* get_class() {
            return il2cpp::get_class<app::SetWorldEventAction__Class>(type_info, "", "SetWorldEventAction");
        }
        inline app::SetWorldEventAction* create() {
            return il2cpp::create_object<app::SetWorldEventAction>(get_class());
        }
    } // namespace SetWorldEventAction
} // namespace app::classes::types
