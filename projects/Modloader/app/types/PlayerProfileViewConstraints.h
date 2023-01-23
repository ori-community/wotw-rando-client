#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerProfileViewConstraints__Class.h>
#include <Modloader/app/structs/PlayerProfileViewConstraints.h>

namespace app::classes::types {
    namespace PlayerProfileViewConstraints {
        inline app::PlayerProfileViewConstraints__Class** type_info = (app::PlayerProfileViewConstraints__Class**)(modloader::win::memory::resolve_rva(0x04726500));
        inline app::PlayerProfileViewConstraints__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfileViewConstraints__Class>(type_info, "PlayFab.ClientModels", "PlayerProfileViewConstraints");
        }
        inline app::PlayerProfileViewConstraints* create() {
            return il2cpp::create_object<app::PlayerProfileViewConstraints>(get_class());
        }
    } // namespace PlayerProfileViewConstraints
} // namespace app::classes::types
