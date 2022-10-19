#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkGoogleAccountResult {
        inline app::LinkGoogleAccountResult__Class** type_info = (app::LinkGoogleAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04715FC8));
        inline app::LinkGoogleAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkGoogleAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkGoogleAccountResult");
        }
        inline app::LinkGoogleAccountResult* create() {
            return il2cpp::create_object<app::LinkGoogleAccountResult>(get_class());
        }
    } // namespace LinkGoogleAccountResult
} // namespace app::classes::types
