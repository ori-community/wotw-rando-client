#pragma once
#include <Modloader/app/structs/PlayFabSignInProvider_c_DisplayClass54_0.h>
#include <Modloader/app/structs/PlayFabSignInProvider_c_DisplayClass54_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabSignInProvider_c_DisplayClass54_0 {
        inline app::PlayFabSignInProvider_c_DisplayClass54_0__Class** type_info() {
            static app::PlayFabSignInProvider_c_DisplayClass54_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabSignInProvider_c_DisplayClass54_0__Class**)(modloader::win::memory::resolve_rva(0x0471E070));
            }
            return cache;
        }
        inline app::PlayFabSignInProvider_c_DisplayClass54_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabSignInProvider_c_DisplayClass54_0__Class>(type_info(), "SystemIntegration", "PlayFabSignInProvider", "<>c__DisplayClass54_0");
        }
        inline app::PlayFabSignInProvider_c_DisplayClass54_0* create() {
            return il2cpp::create_object<app::PlayFabSignInProvider_c_DisplayClass54_0>(get_class());
        }
    } // namespace PlayFabSignInProvider_c_DisplayClass54_0
} // namespace app::classes::types
