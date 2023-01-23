#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext__Class.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>

namespace app::classes::types {
    namespace PlayFabAuthenticationContext {
        inline app::PlayFabAuthenticationContext__Class** type_info = (app::PlayFabAuthenticationContext__Class**)(modloader::win::memory::resolve_rva(0x04703CB8));
        inline app::PlayFabAuthenticationContext__Class* get_class() {
            return il2cpp::get_class<app::PlayFabAuthenticationContext__Class>(type_info, "PlayFab", "PlayFabAuthenticationContext");
        }
        inline app::PlayFabAuthenticationContext* create() {
            return il2cpp::create_object<app::PlayFabAuthenticationContext>(get_class());
        }
    } // namespace PlayFabAuthenticationContext
} // namespace app::classes::types
