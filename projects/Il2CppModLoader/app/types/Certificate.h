#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Certificate {
        namespace {
            app::Certificate__Class* type_info_ref = nullptr;
        }
        app::Certificate__Class** type_info = &type_info_ref;
        inline app::Certificate__Class* get_class() {
            return il2cpp::get_class<app::Certificate__Class>(type_info, "PlayFab.MultiplayerModels", "Certificate");
        }
        inline app::Certificate* create() {
            return il2cpp::create_object<app::Certificate>(get_class());
        }
    } // namespace Certificate
} // namespace app::classes::types
