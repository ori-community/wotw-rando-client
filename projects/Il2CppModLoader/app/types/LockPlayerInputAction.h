#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LockPlayerInputAction {
        namespace {
            inline app::LockPlayerInputAction__Class* type_info_ref = nullptr;
        }
        inline app::LockPlayerInputAction__Class** type_info = &type_info_ref;
        inline app::LockPlayerInputAction__Class* get_class() {
            return il2cpp::get_class<app::LockPlayerInputAction__Class>(type_info, "", "LockPlayerInputAction");
        }
        inline app::LockPlayerInputAction* create() {
            return il2cpp::create_object<app::LockPlayerInputAction>(get_class());
        }
    } // namespace LockPlayerInputAction
} // namespace app::classes::types
