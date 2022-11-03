#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowLoremasterScreenAction {
        namespace {
            inline app::ShowLoremasterScreenAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowLoremasterScreenAction__Class** type_info = &type_info_ref;
        inline app::ShowLoremasterScreenAction__Class* get_class() {
            return il2cpp::get_class<app::ShowLoremasterScreenAction__Class>(type_info, "", "ShowLoremasterScreenAction");
        }
        inline app::ShowLoremasterScreenAction* create() {
            return il2cpp::create_object<app::ShowLoremasterScreenAction>(get_class());
        }
    } // namespace ShowLoremasterScreenAction
} // namespace app::classes::types
