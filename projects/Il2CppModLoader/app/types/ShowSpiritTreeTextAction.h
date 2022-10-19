#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowSpiritTreeTextAction {
        namespace {
            inline app::ShowSpiritTreeTextAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowSpiritTreeTextAction__Class** type_info = &type_info_ref;
        inline app::ShowSpiritTreeTextAction__Class* get_class() {
            return il2cpp::get_class<app::ShowSpiritTreeTextAction__Class>(type_info, "", "ShowSpiritTreeTextAction");
        }
        inline app::ShowSpiritTreeTextAction* create() {
            return il2cpp::create_object<app::ShowSpiritTreeTextAction>(get_class());
        }
    } // namespace ShowSpiritTreeTextAction
} // namespace app::classes::types
