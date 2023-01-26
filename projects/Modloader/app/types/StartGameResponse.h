#pragma once
#include <Modloader/app/structs/StartGameResponse.h>
#include <Modloader/app/structs/StartGameResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartGameResponse {
        inline app::StartGameResponse__Class** type_info() {
            static app::StartGameResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StartGameResponse__Class**)(modloader::win::memory::resolve_rva(0x047301F8));
            }
            return cache;
        }
        inline app::StartGameResponse__Class* get_class() {
            return il2cpp::get_class<app::StartGameResponse__Class>(type_info(), "PlayFab.MatchmakerModels", "StartGameResponse");
        }
        inline app::StartGameResponse* create() {
            return il2cpp::create_object<app::StartGameResponse>(get_class());
        }
    } // namespace StartGameResponse
} // namespace app::classes::types
