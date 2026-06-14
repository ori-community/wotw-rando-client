#pragma once
#include <Modloader/app/structs/StartGameRequest_1.h>
#include <Modloader/app/structs/StartGameRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartGameRequest_1 {
        inline app::StartGameRequest_1__Class** type_info() {
            static app::StartGameRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StartGameRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0478A2C8));
            }
            return cache;
        }
        inline app::StartGameRequest_1__Class* get_class() {
            return il2cpp::get_class<app::StartGameRequest_1__Class>(type_info(), "PlayFab.MatchmakerModels", "StartGameRequest");
        }
        inline app::StartGameRequest_1* create() {
            return il2cpp::create_object<app::StartGameRequest_1>(get_class());
        }
    } // namespace StartGameRequest_1
} // namespace app::classes::types
