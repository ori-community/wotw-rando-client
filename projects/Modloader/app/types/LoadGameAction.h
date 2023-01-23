#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadGameAction__Class.h>
#include <Modloader/app/structs/LoadGameAction.h>

namespace app::classes::types {
    namespace LoadGameAction {
        namespace {
            inline app::LoadGameAction__Class* type_info_ref = nullptr;
        }
        inline app::LoadGameAction__Class** type_info = &type_info_ref;
        inline app::LoadGameAction__Class* get_class() {
            return il2cpp::get_class<app::LoadGameAction__Class>(type_info, "", "LoadGameAction");
        }
        inline app::LoadGameAction* create() {
            return il2cpp::create_object<app::LoadGameAction>(get_class());
        }
    } // namespace LoadGameAction
} // namespace app::classes::types
