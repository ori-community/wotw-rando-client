#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerAbilities__Class.h>
#include <Modloader/app/structs/PlayerAbilities.h>

namespace app::classes::types {
    namespace PlayerAbilities {
        namespace {
            inline app::PlayerAbilities__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAbilities__Class** type_info = &type_info_ref;
        inline app::PlayerAbilities__Class* get_class() {
            return il2cpp::get_class<app::PlayerAbilities__Class>(type_info, "", "PlayerAbilities");
        }
        inline app::PlayerAbilities* create() {
            return il2cpp::create_object<app::PlayerAbilities>(get_class());
        }
    } // namespace PlayerAbilities
} // namespace app::classes::types
