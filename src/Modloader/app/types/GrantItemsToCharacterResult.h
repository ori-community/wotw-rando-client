#pragma once
#include <Modloader/app/structs/GrantItemsToCharacterResult.h>
#include <Modloader/app/structs/GrantItemsToCharacterResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToCharacterResult {
        inline app::GrantItemsToCharacterResult__Class** type_info() {
            static app::GrantItemsToCharacterResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrantItemsToCharacterResult__Class**)(modloader::win::memory::resolve_rva(0x0470B550));
            }
            return cache;
        }
        inline app::GrantItemsToCharacterResult__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToCharacterResult__Class>(type_info(), "PlayFab.ServerModels", "GrantItemsToCharacterResult");
        }
        inline app::GrantItemsToCharacterResult* create() {
            return il2cpp::create_object<app::GrantItemsToCharacterResult>(get_class());
        }
    } // namespace GrantItemsToCharacterResult
} // namespace app::classes::types
