#pragma once
#include <Modloader/app/structs/XboxLiveIdentityUI.h>
#include <Modloader/app/structs/XboxLiveIdentityUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxLiveIdentityUI {
        inline app::XboxLiveIdentityUI__Class** type_info() {
            static app::XboxLiveIdentityUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxLiveIdentityUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxLiveIdentityUI__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveIdentityUI__Class>(type_info(), "", "XboxLiveIdentityUI");
        }
        inline app::XboxLiveIdentityUI* create() {
            return il2cpp::create_object<app::XboxLiveIdentityUI>(get_class());
        }
    } // namespace XboxLiveIdentityUI
} // namespace app::classes::types
