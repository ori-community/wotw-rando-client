#pragma once
#include <Modloader/app/structs/DeleteCharacterFromUserResult.h>
#include <Modloader/app/structs/DeleteCharacterFromUserResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteCharacterFromUserResult {
        inline app::DeleteCharacterFromUserResult__Class** type_info() {
            static app::DeleteCharacterFromUserResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteCharacterFromUserResult__Class**)(modloader::win::memory::resolve_rva(0x04771398));
            }
            return cache;
        }
        inline app::DeleteCharacterFromUserResult__Class* get_class() {
            return il2cpp::get_class<app::DeleteCharacterFromUserResult__Class>(type_info(), "PlayFab.ServerModels", "DeleteCharacterFromUserResult");
        }
        inline app::DeleteCharacterFromUserResult* create() {
            return il2cpp::create_object<app::DeleteCharacterFromUserResult>(get_class());
        }
    } // namespace DeleteCharacterFromUserResult
} // namespace app::classes::types
