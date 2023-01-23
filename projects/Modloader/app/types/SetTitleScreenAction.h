#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetTitleScreenAction__Class.h>
#include <Modloader/app/structs/SetTitleScreenAction.h>

namespace app::classes::types {
    namespace SetTitleScreenAction {
        namespace {
            inline app::SetTitleScreenAction__Class* type_info_ref = nullptr;
        }
        inline app::SetTitleScreenAction__Class** type_info = &type_info_ref;
        inline app::SetTitleScreenAction__Class* get_class() {
            return il2cpp::get_class<app::SetTitleScreenAction__Class>(type_info, "", "SetTitleScreenAction");
        }
        inline app::SetTitleScreenAction* create() {
            return il2cpp::create_object<app::SetTitleScreenAction>(get_class());
        }
    } // namespace SetTitleScreenAction
} // namespace app::classes::types
