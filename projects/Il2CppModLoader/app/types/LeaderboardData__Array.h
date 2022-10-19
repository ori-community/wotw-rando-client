#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardData__Array {
        namespace {
            inline app::LeaderboardData__Array__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardData__Array__Class** type_info = &type_info_ref;
        inline app::LeaderboardData__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardData__Array__Class>(type_info, "", "LeaderboardData[]");
        }
        inline app::LeaderboardData__Array* create() {
            return il2cpp::create_object<app::LeaderboardData__Array>(get_class());
        }
    } // namespace LeaderboardData__Array
} // namespace app::classes::types
