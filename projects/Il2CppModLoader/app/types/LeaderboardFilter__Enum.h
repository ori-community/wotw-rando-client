#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardFilter__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaderboardFilter__Enum__Class** type_info;
        inline app::LeaderboardFilter__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardFilter__Enum__Class>(type_info, "", "LeaderboardFilter");
        }
        inline app::LeaderboardFilter__Enum* create() {
            return il2cpp::create_object<app::LeaderboardFilter__Enum>(get_class());
        }
    } // namespace LeaderboardFilter__Enum
} // namespace app::classes::types
