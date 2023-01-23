#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerConnectionState__Enum__Class.h>
#include <Modloader/app/structs/PlayerConnectionState__Enum.h>

namespace app::classes::types {
    namespace PlayerConnectionState__Enum {
        namespace {
            inline app::PlayerConnectionState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlayerConnectionState__Enum__Class** type_info = &type_info_ref;
        inline app::PlayerConnectionState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayerConnectionState__Enum__Class>(type_info, "PlayFab.ServerModels", "PlayerConnectionState");
        }
        inline app::PlayerConnectionState__Enum* create() {
            return il2cpp::create_object<app::PlayerConnectionState__Enum>(get_class());
        }
    } // namespace PlayerConnectionState__Enum
} // namespace app::classes::types
