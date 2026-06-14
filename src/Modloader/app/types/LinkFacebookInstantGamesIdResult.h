#pragma once
#include <Modloader/app/structs/LinkFacebookInstantGamesIdResult.h>
#include <Modloader/app/structs/LinkFacebookInstantGamesIdResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkFacebookInstantGamesIdResult {
        inline app::LinkFacebookInstantGamesIdResult__Class** type_info() {
            static app::LinkFacebookInstantGamesIdResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkFacebookInstantGamesIdResult__Class**)(modloader::win::memory::resolve_rva(0x04702110));
            }
            return cache;
        }
        inline app::LinkFacebookInstantGamesIdResult__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookInstantGamesIdResult__Class>(type_info(), "PlayFab.ClientModels", "LinkFacebookInstantGamesIdResult");
        }
        inline app::LinkFacebookInstantGamesIdResult* create() {
            return il2cpp::create_object<app::LinkFacebookInstantGamesIdResult>(get_class());
        }
    } // namespace LinkFacebookInstantGamesIdResult
} // namespace app::classes::types
