#pragma once
#include <Modloader/app/structs/ReturnToTitleScreenAction.h>
#include <Modloader/app/structs/ReturnToTitleScreenAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReturnToTitleScreenAction {
        inline app::ReturnToTitleScreenAction__Class** type_info() {
            static app::ReturnToTitleScreenAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReturnToTitleScreenAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReturnToTitleScreenAction__Class* get_class() {
            return il2cpp::get_class<app::ReturnToTitleScreenAction__Class>(type_info(), "", "ReturnToTitleScreenAction");
        }
        inline app::ReturnToTitleScreenAction* create() {
            return il2cpp::create_object<app::ReturnToTitleScreenAction>(get_class());
        }
    } // namespace ReturnToTitleScreenAction
} // namespace app::classes::types
