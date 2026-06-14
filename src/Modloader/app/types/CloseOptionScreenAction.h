#pragma once
#include <Modloader/app/structs/CloseOptionScreenAction.h>
#include <Modloader/app/structs/CloseOptionScreenAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CloseOptionScreenAction {
        inline app::CloseOptionScreenAction__Class** type_info() {
            static app::CloseOptionScreenAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CloseOptionScreenAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CloseOptionScreenAction__Class* get_class() {
            return il2cpp::get_class<app::CloseOptionScreenAction__Class>(type_info(), "", "CloseOptionScreenAction");
        }
        inline app::CloseOptionScreenAction* create() {
            return il2cpp::create_object<app::CloseOptionScreenAction>(get_class());
        }
    } // namespace CloseOptionScreenAction
} // namespace app::classes::types
