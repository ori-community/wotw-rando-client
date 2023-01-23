#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabSignInProvider_c__Class.h>
#include <Modloader/app/structs/PlayFabSignInProvider_c.h>

namespace app::classes::types {
    namespace PlayFabSignInProvider_c {
        inline app::PlayFabSignInProvider_c__Class** type_info = (app::PlayFabSignInProvider_c__Class**)(modloader::win::memory::resolve_rva(0x0478CED8));
        inline app::PlayFabSignInProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabSignInProvider_c__Class>(type_info, "SystemIntegration", "PlayFabSignInProvider", "<>c");
        }
        inline app::PlayFabSignInProvider_c* create() {
            return il2cpp::create_object<app::PlayFabSignInProvider_c>(get_class());
        }
    } // namespace PlayFabSignInProvider_c
} // namespace app::classes::types
