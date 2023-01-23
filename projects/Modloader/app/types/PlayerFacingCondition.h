#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerFacingCondition__Class.h>
#include <Modloader/app/structs/PlayerFacingCondition.h>

namespace app::classes::types {
    namespace PlayerFacingCondition {
        namespace {
            inline app::PlayerFacingCondition__Class* type_info_ref = nullptr;
        }
        inline app::PlayerFacingCondition__Class** type_info = &type_info_ref;
        inline app::PlayerFacingCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerFacingCondition__Class>(type_info, "", "PlayerFacingCondition");
        }
        inline app::PlayerFacingCondition* create() {
            return il2cpp::create_object<app::PlayerFacingCondition>(get_class());
        }
    } // namespace PlayerFacingCondition
} // namespace app::classes::types
