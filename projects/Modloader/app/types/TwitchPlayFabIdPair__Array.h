#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TwitchPlayFabIdPair__Array__Class.h>
#include <Modloader/app/structs/TwitchPlayFabIdPair__Array.h>

namespace app::classes::types {
    namespace TwitchPlayFabIdPair__Array {
        namespace {
            inline app::TwitchPlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::TwitchPlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::TwitchPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::TwitchPlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "TwitchPlayFabIdPair[]");
        }
        inline app::TwitchPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::TwitchPlayFabIdPair__Array>(get_class());
        }
    } // namespace TwitchPlayFabIdPair__Array
} // namespace app::classes::types
