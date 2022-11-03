#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListUsersCharactersResult_1 {
        inline app::ListUsersCharactersResult_1__Class** type_info = (app::ListUsersCharactersResult_1__Class**)(modloader::win::memory::resolve_rva(0x04796A00));
        inline app::ListUsersCharactersResult_1__Class* get_class() {
            return il2cpp::get_class<app::ListUsersCharactersResult_1__Class>(type_info, "PlayFab.ServerModels", "ListUsersCharactersResult");
        }
        inline app::ListUsersCharactersResult_1* create() {
            return il2cpp::create_object<app::ListUsersCharactersResult_1>(get_class());
        }
    } // namespace ListUsersCharactersResult_1
} // namespace app::classes::types
