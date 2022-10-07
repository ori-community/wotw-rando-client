#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardB__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaderboardB__Enum__Class** type_info;
        inline app::LeaderboardB__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardB__Enum__Class>(type_info, "", "LeaderboardB");
        }
        inline app::LeaderboardB__Enum* create() {
            return il2cpp::create_object<app::LeaderboardB__Enum>(get_class());
        }
        inline app::LeaderboardB__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::LeaderboardB__Enum__Array>(get_class(), size);
        }
        inline app::LeaderboardB__Enum__Array* create_array(const std::vector<app::LeaderboardB__Enum*>& items) {
            return il2cpp::array_new<app::LeaderboardB__Enum__Array>(get_class(), items);
        }
    } // namespace LeaderboardB__Enum
} // namespace app::classes::types
