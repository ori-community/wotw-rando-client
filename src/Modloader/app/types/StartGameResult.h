#pragma once
#include <Modloader/app/structs/StartGameResult.h>
#include <Modloader/app/structs/StartGameResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartGameResult {
        inline app::StartGameResult__Class** type_info() {
            static app::StartGameResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StartGameResult__Class**)(modloader::win::memory::resolve_rva(0x047428E8));
            }
            return cache;
        }
        inline app::StartGameResult__Class* get_class() {
            return il2cpp::get_class<app::StartGameResult__Class>(type_info(), "PlayFab.ClientModels", "StartGameResult");
        }
        inline app::StartGameResult* create() {
            return il2cpp::create_object<app::StartGameResult>(get_class());
        }
    } // namespace StartGameResult
} // namespace app::classes::types
