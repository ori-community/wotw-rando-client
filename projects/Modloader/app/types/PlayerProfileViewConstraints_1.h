#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerProfileViewConstraints_1__Class.h>
#include <Modloader/app/structs/PlayerProfileViewConstraints_1.h>

namespace app::classes::types {
    namespace PlayerProfileViewConstraints_1 {
        namespace {
            inline app::PlayerProfileViewConstraints_1__Class* type_info_ref = nullptr;
        }
        inline app::PlayerProfileViewConstraints_1__Class** type_info = &type_info_ref;
        inline app::PlayerProfileViewConstraints_1__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfileViewConstraints_1__Class>(type_info, "PlayFab.ServerModels", "PlayerProfileViewConstraints");
        }
        inline app::PlayerProfileViewConstraints_1* create() {
            return il2cpp::create_object<app::PlayerProfileViewConstraints_1>(get_class());
        }
    } // namespace PlayerProfileViewConstraints_1
} // namespace app::classes::types
