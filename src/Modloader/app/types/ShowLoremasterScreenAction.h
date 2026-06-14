#pragma once
#include <Modloader/app/structs/ShowLoremasterScreenAction.h>
#include <Modloader/app/structs/ShowLoremasterScreenAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowLoremasterScreenAction {
        inline app::ShowLoremasterScreenAction__Class** type_info() {
            static app::ShowLoremasterScreenAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowLoremasterScreenAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowLoremasterScreenAction__Class* get_class() {
            return il2cpp::get_class<app::ShowLoremasterScreenAction__Class>(type_info(), "", "ShowLoremasterScreenAction");
        }
        inline app::ShowLoremasterScreenAction* create() {
            return il2cpp::create_object<app::ShowLoremasterScreenAction>(get_class());
        }
    } // namespace ShowLoremasterScreenAction
} // namespace app::classes::types
