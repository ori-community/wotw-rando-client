#pragma once
#include <Modloader/app/structs/MoveItemToUserFromCharacterResult.h>
#include <Modloader/app/structs/MoveItemToUserFromCharacterResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveItemToUserFromCharacterResult {
        inline app::MoveItemToUserFromCharacterResult__Class** type_info() {
            static app::MoveItemToUserFromCharacterResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoveItemToUserFromCharacterResult__Class**)(modloader::win::memory::resolve_rva(0x04707D48));
            }
            return cache;
        }
        inline app::MoveItemToUserFromCharacterResult__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToUserFromCharacterResult__Class>(type_info(), "PlayFab.ServerModels", "MoveItemToUserFromCharacterResult");
        }
        inline app::MoveItemToUserFromCharacterResult* create() {
            return il2cpp::create_object<app::MoveItemToUserFromCharacterResult>(get_class());
        }
    } // namespace MoveItemToUserFromCharacterResult
} // namespace app::classes::types
