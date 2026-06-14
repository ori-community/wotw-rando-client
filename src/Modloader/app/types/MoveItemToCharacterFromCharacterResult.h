#pragma once
#include <Modloader/app/structs/MoveItemToCharacterFromCharacterResult.h>
#include <Modloader/app/structs/MoveItemToCharacterFromCharacterResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveItemToCharacterFromCharacterResult {
        inline app::MoveItemToCharacterFromCharacterResult__Class** type_info() {
            static app::MoveItemToCharacterFromCharacterResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoveItemToCharacterFromCharacterResult__Class**)(modloader::win::memory::resolve_rva(0x0470E650));
            }
            return cache;
        }
        inline app::MoveItemToCharacterFromCharacterResult__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToCharacterFromCharacterResult__Class>(type_info(), "PlayFab.ServerModels", "MoveItemToCharacterFromCharacterResult");
        }
        inline app::MoveItemToCharacterFromCharacterResult* create() {
            return il2cpp::create_object<app::MoveItemToCharacterFromCharacterResult>(get_class());
        }
    } // namespace MoveItemToCharacterFromCharacterResult
} // namespace app::classes::types
