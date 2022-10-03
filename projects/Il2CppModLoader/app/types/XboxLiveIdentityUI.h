#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxLiveIdentityUI {
        namespace {
            app::XboxLiveIdentityUI__Class* type_info_ref = nullptr;
        }
        app::XboxLiveIdentityUI__Class** type_info = &type_info_ref;
        inline app::XboxLiveIdentityUI__Class* get_class() {
            return il2cpp::get_class<app::XboxLiveIdentityUI__Class>(type_info, "", "XboxLiveIdentityUI");
        }
        inline app::XboxLiveIdentityUI* create() {
            return il2cpp::create_object<app::XboxLiveIdentityUI>(get_class());
        }
    } // namespace XboxLiveIdentityUI
} // namespace app::classes::types
