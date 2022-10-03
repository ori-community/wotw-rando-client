#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerStatisticVersion__Array {
        namespace {
            app::PlayerStatisticVersion__Array__Class* type_info_ref = nullptr;
        }
        app::PlayerStatisticVersion__Array__Class** type_info = &type_info_ref;
        inline app::PlayerStatisticVersion__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerStatisticVersion__Array__Class>(type_info, "PlayFab.ClientModels", "PlayerStatisticVersion[]");
        }
        inline app::PlayerStatisticVersion__Array* create() {
            return il2cpp::create_object<app::PlayerStatisticVersion__Array>(get_class());
        }
    } // namespace PlayerStatisticVersion__Array
} // namespace app::classes::types
