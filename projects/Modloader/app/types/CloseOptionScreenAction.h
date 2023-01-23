#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CloseOptionScreenAction__Class.h>
#include <Modloader/app/structs/CloseOptionScreenAction.h>

namespace app::classes::types {
    namespace CloseOptionScreenAction {
        namespace {
            inline app::CloseOptionScreenAction__Class* type_info_ref = nullptr;
        }
        inline app::CloseOptionScreenAction__Class** type_info = &type_info_ref;
        inline app::CloseOptionScreenAction__Class* get_class() {
            return il2cpp::get_class<app::CloseOptionScreenAction__Class>(type_info, "", "CloseOptionScreenAction");
        }
        inline app::CloseOptionScreenAction* create() {
            return il2cpp::create_object<app::CloseOptionScreenAction>(get_class());
        }
    } // namespace CloseOptionScreenAction
} // namespace app::classes::types
