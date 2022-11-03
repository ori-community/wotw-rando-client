#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamPlayFabIdPair_1__Array {
        namespace {
            inline app::SteamPlayFabIdPair_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::SteamPlayFabIdPair_1__Array__Class** type_info = &type_info_ref;
        inline app::SteamPlayFabIdPair_1__Array__Class* get_class() {
            return il2cpp::get_class<app::SteamPlayFabIdPair_1__Array__Class>(type_info, "PlayFab.ServerModels", "SteamPlayFabIdPair[]");
        }
        inline app::SteamPlayFabIdPair_1__Array* create() {
            return il2cpp::create_object<app::SteamPlayFabIdPair_1__Array>(get_class());
        }
    } // namespace SteamPlayFabIdPair_1__Array
} // namespace app::classes::types
