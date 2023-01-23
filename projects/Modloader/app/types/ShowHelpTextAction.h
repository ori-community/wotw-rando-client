#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowHelpTextAction__Class.h>
#include <Modloader/app/structs/ShowHelpTextAction.h>

namespace app::classes::types {
    namespace ShowHelpTextAction {
        namespace {
            inline app::ShowHelpTextAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowHelpTextAction__Class** type_info = &type_info_ref;
        inline app::ShowHelpTextAction__Class* get_class() {
            return il2cpp::get_class<app::ShowHelpTextAction__Class>(type_info, "", "ShowHelpTextAction");
        }
        inline app::ShowHelpTextAction* create() {
            return il2cpp::create_object<app::ShowHelpTextAction>(get_class());
        }
    } // namespace ShowHelpTextAction
} // namespace app::classes::types
