#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetGameModeToPrologueAction__Class.h>
#include <Modloader/app/structs/SetGameModeToPrologueAction.h>

namespace app::classes::types {
    namespace SetGameModeToPrologueAction {
        namespace {
            inline app::SetGameModeToPrologueAction__Class* type_info_ref = nullptr;
        }
        inline app::SetGameModeToPrologueAction__Class** type_info = &type_info_ref;
        inline app::SetGameModeToPrologueAction__Class* get_class() {
            return il2cpp::get_class<app::SetGameModeToPrologueAction__Class>(type_info, "", "SetGameModeToPrologueAction");
        }
        inline app::SetGameModeToPrologueAction* create() {
            return il2cpp::create_object<app::SetGameModeToPrologueAction>(get_class());
        }
    } // namespace SetGameModeToPrologueAction
} // namespace app::classes::types
