#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteamPlayFabIdPair__Array__Class.h>
#include <Modloader/app/structs/SteamPlayFabIdPair__Array.h>

namespace app::classes::types {
    namespace SteamPlayFabIdPair__Array {
        namespace {
            inline app::SteamPlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::SteamPlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::SteamPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::SteamPlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "SteamPlayFabIdPair[]");
        }
        inline app::SteamPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::SteamPlayFabIdPair__Array>(get_class());
        }
    } // namespace SteamPlayFabIdPair__Array
} // namespace app::classes::types
