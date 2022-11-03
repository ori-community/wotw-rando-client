#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkFacebookInstantGamesIdResult {
        inline app::LinkFacebookInstantGamesIdResult__Class** type_info = (app::LinkFacebookInstantGamesIdResult__Class**)(modloader::win::memory::resolve_rva(0x04702110));
        inline app::LinkFacebookInstantGamesIdResult__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookInstantGamesIdResult__Class>(type_info, "PlayFab.ClientModels", "LinkFacebookInstantGamesIdResult");
        }
        inline app::LinkFacebookInstantGamesIdResult* create() {
            return il2cpp::create_object<app::LinkFacebookInstantGamesIdResult>(get_class());
        }
    } // namespace LinkFacebookInstantGamesIdResult
} // namespace app::classes::types
