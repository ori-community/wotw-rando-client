#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DestroyObjectAction {
        namespace {
            inline app::DestroyObjectAction__Class* type_info_ref = nullptr;
        }
        inline app::DestroyObjectAction__Class** type_info = &type_info_ref;
        inline app::DestroyObjectAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyObjectAction__Class>(type_info, "", "DestroyObjectAction");
        }
        inline app::DestroyObjectAction* create() {
            return il2cpp::create_object<app::DestroyObjectAction>(get_class());
        }
    } // namespace DestroyObjectAction
} // namespace app::classes::types
