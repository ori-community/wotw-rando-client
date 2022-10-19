#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardTableUI_LeaderboardMetaData {
        namespace {
            inline app::LeaderboardTableUI_LeaderboardMetaData__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardTableUI_LeaderboardMetaData__Class** type_info = &type_info_ref;
        inline app::LeaderboardTableUI_LeaderboardMetaData__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardTableUI_LeaderboardMetaData__Class>(type_info, "", "LeaderboardTableUI", "LeaderboardMetaData");
        }
        inline app::LeaderboardTableUI_LeaderboardMetaData* create() {
            return il2cpp::create_object<app::LeaderboardTableUI_LeaderboardMetaData>(get_class());
        }
        inline app::LeaderboardTableUI_LeaderboardMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::LeaderboardTableUI_LeaderboardMetaData__Array>(get_class(), size);
        }
        inline app::LeaderboardTableUI_LeaderboardMetaData__Array* create_array(const std::vector<app::LeaderboardTableUI_LeaderboardMetaData*>& items) {
            return il2cpp::array_new<app::LeaderboardTableUI_LeaderboardMetaData__Array>(get_class(), items);
        }
    } // namespace LeaderboardTableUI_LeaderboardMetaData
} // namespace app::classes::types
