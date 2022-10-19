#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardTableUI_LeaderboardMetaData__Array {
        namespace {
            inline app::LeaderboardTableUI_LeaderboardMetaData__Array__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardTableUI_LeaderboardMetaData__Array__Class** type_info = &type_info_ref;
        inline app::LeaderboardTableUI_LeaderboardMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardTableUI_LeaderboardMetaData__Array__Class>(type_info, "", "LeaderboardTableUI+LeaderboardMetaData[]");
        }
        inline app::LeaderboardTableUI_LeaderboardMetaData__Array* create() {
            return il2cpp::create_object<app::LeaderboardTableUI_LeaderboardMetaData__Array>(get_class());
        }
    } // namespace LeaderboardTableUI_LeaderboardMetaData__Array
} // namespace app::classes::types
