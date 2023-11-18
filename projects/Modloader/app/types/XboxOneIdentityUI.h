#pragma once
#include <Modloader/app/structs/XboxOneIdentityUI.h>
#include <Modloader/app/structs/XboxOneIdentityUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneIdentityUI {
        inline app::XboxOneIdentityUI__Class** type_info() {
            static app::XboxOneIdentityUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxOneIdentityUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxOneIdentityUI__Class* get_class() {
            return il2cpp::get_class<app::XboxOneIdentityUI__Class>(type_info(), "", "XboxOneIdentityUI");
        }
        inline app::XboxOneIdentityUI* create() {
            return il2cpp::create_object<app::XboxOneIdentityUI>(get_class());
        }
    } // namespace XboxOneIdentityUI
} // namespace app::classes::types
