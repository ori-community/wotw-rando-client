#pragma once
#include <Modloader/app/structs/ListUsersCharactersRequest_1.h>
#include <Modloader/app/structs/ListUsersCharactersRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListUsersCharactersRequest_1 {
        inline app::ListUsersCharactersRequest_1__Class** type_info() {
            static app::ListUsersCharactersRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListUsersCharactersRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0476A098));
            }
            return cache;
        }
        inline app::ListUsersCharactersRequest_1__Class* get_class() {
            return il2cpp::get_class<app::ListUsersCharactersRequest_1__Class>(type_info(), "PlayFab.ServerModels", "ListUsersCharactersRequest");
        }
        inline app::ListUsersCharactersRequest_1* create() {
            return il2cpp::create_object<app::ListUsersCharactersRequest_1>(get_class());
        }
    } // namespace ListUsersCharactersRequest_1
} // namespace app::classes::types
