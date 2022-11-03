#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewGameAction {
        namespace {
            inline app::NewGameAction__Class* type_info_ref = nullptr;
        }
        inline app::NewGameAction__Class** type_info = &type_info_ref;
        inline app::NewGameAction__Class* get_class() {
            return il2cpp::get_class<app::NewGameAction__Class>(type_info, "", "NewGameAction");
        }
        inline app::NewGameAction* create() {
            return il2cpp::create_object<app::NewGameAction>(get_class());
        }
    } // namespace NewGameAction
} // namespace app::classes::types
