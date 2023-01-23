#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerDistanceCondition__Class.h>
#include <Modloader/app/structs/PlayerDistanceCondition.h>

namespace app::classes::types {
    namespace PlayerDistanceCondition {
        namespace {
            inline app::PlayerDistanceCondition__Class* type_info_ref = nullptr;
        }
        inline app::PlayerDistanceCondition__Class** type_info = &type_info_ref;
        inline app::PlayerDistanceCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerDistanceCondition__Class>(type_info, "", "PlayerDistanceCondition");
        }
        inline app::PlayerDistanceCondition* create() {
            return il2cpp::create_object<app::PlayerDistanceCondition>(get_class());
        }
    } // namespace PlayerDistanceCondition
} // namespace app::classes::types
