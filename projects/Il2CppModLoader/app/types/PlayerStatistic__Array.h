#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerStatistic__Array {
        namespace {
            inline app::PlayerStatistic__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerStatistic__Array__Class** type_info = &type_info_ref;
        inline app::PlayerStatistic__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatistic__Array__Class>(type_info, "PlayFab.ServerModels", "PlayerStatistic[]");
        }
        inline app::PlayerStatistic__Array* create() {
            return il2cpp::create_object<app::PlayerStatistic__Array>(get_class());
        }
    } // namespace PlayerStatistic__Array
} // namespace app::classes::types
