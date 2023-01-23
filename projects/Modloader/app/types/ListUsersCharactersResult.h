#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListUsersCharactersResult__Class.h>
#include <Modloader/app/structs/ListUsersCharactersResult.h>

namespace app::classes::types {
    namespace ListUsersCharactersResult {
        inline app::ListUsersCharactersResult__Class** type_info = (app::ListUsersCharactersResult__Class**)(modloader::win::memory::resolve_rva(0x047617D8));
        inline app::ListUsersCharactersResult__Class* get_class() {
            return il2cpp::get_class<app::ListUsersCharactersResult__Class>(type_info, "PlayFab.ClientModels", "ListUsersCharactersResult");
        }
        inline app::ListUsersCharactersResult* create() {
            return il2cpp::create_object<app::ListUsersCharactersResult>(get_class());
        }
    } // namespace ListUsersCharactersResult
} // namespace app::classes::types
