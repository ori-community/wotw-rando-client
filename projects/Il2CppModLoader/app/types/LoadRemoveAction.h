#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadRemoveAction {
        namespace {
            inline app::LoadRemoveAction__Class* type_info_ref = nullptr;
        }
        inline app::LoadRemoveAction__Class** type_info = &type_info_ref;
        inline app::LoadRemoveAction__Class* get_class() {
            return il2cpp::get_class<app::LoadRemoveAction__Class>(type_info, "", "LoadRemoveAction");
        }
        inline app::LoadRemoveAction* create() {
            return il2cpp::create_object<app::LoadRemoveAction>(get_class());
        }
    } // namespace LoadRemoveAction
} // namespace app::classes::types
