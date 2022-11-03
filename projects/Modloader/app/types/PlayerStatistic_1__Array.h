#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerStatistic_1__Array {
        namespace {
            inline app::PlayerStatistic_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerStatistic_1__Array__Class** type_info = &type_info_ref;
        inline app::PlayerStatistic_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatistic_1__Array__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerStatistic[]");
        }
        inline app::PlayerStatistic_1__Array* create() {
            return il2cpp::create_object<app::PlayerStatistic_1__Array>(get_class());
        }
    } // namespace PlayerStatistic_1__Array
} // namespace app::classes::types
