#pragma once
#include <Modloader/app/structs/ListUsersCharactersResult.h>
#include <Modloader/app/structs/ListUsersCharactersResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListUsersCharactersResult {
        inline app::ListUsersCharactersResult__Class** type_info() {
            static app::ListUsersCharactersResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListUsersCharactersResult__Class**)(modloader::win::memory::resolve_rva(0x047617D8));
            }
            return cache;
        }
        inline app::ListUsersCharactersResult__Class* get_class() {
            return il2cpp::get_class<app::ListUsersCharactersResult__Class>(type_info(), "PlayFab.ClientModels", "ListUsersCharactersResult");
        }
        inline app::ListUsersCharactersResult* create() {
            return il2cpp::create_object<app::ListUsersCharactersResult>(get_class());
        }
    } // namespace ListUsersCharactersResult
} // namespace app::classes::types
