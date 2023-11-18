#pragma once
#include <Modloader/app/structs/LockPlayerInputAction.h>
#include <Modloader/app/structs/LockPlayerInputAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LockPlayerInputAction {
        inline app::LockPlayerInputAction__Class** type_info() {
            static app::LockPlayerInputAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LockPlayerInputAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LockPlayerInputAction__Class* get_class() {
            return il2cpp::get_class<app::LockPlayerInputAction__Class>(type_info(), "", "LockPlayerInputAction");
        }
        inline app::LockPlayerInputAction* create() {
            return il2cpp::create_object<app::LockPlayerInputAction>(get_class());
        }
    } // namespace LockPlayerInputAction
} // namespace app::classes::types
