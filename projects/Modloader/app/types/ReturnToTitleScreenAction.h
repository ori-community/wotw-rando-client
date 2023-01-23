#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReturnToTitleScreenAction__Class.h>
#include <Modloader/app/structs/ReturnToTitleScreenAction.h>

namespace app::classes::types {
    namespace ReturnToTitleScreenAction {
        namespace {
            inline app::ReturnToTitleScreenAction__Class* type_info_ref = nullptr;
        }
        inline app::ReturnToTitleScreenAction__Class** type_info = &type_info_ref;
        inline app::ReturnToTitleScreenAction__Class* get_class() {
            return il2cpp::get_class<app::ReturnToTitleScreenAction__Class>(type_info, "", "ReturnToTitleScreenAction");
        }
        inline app::ReturnToTitleScreenAction* create() {
            return il2cpp::create_object<app::ReturnToTitleScreenAction>(get_class());
        }
    } // namespace ReturnToTitleScreenAction
} // namespace app::classes::types
