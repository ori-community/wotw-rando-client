#pragma once
#include <Modloader/app/structs/ServerAnimatorHelper.h>
#include <Modloader/app/structs/ServerAnimatorHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerAnimatorHelper {
        inline app::ServerAnimatorHelper__Class** type_info() {
            static app::ServerAnimatorHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerAnimatorHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerAnimatorHelper__Class* get_class() {
            return il2cpp::get_class<app::ServerAnimatorHelper__Class>(type_info(), "", "ServerAnimatorHelper");
        }
        inline app::ServerAnimatorHelper* create() {
            return il2cpp::create_object<app::ServerAnimatorHelper>(get_class());
        }
    } // namespace ServerAnimatorHelper
} // namespace app::classes::types
