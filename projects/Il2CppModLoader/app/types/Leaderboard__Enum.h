#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Leaderboard__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Leaderboard__Enum__Class** type_info;
        inline app::Leaderboard__Enum__Class* get_class() {
            return il2cpp::get_class<app::Leaderboard__Enum__Class>(type_info, "", "Leaderboard");
        }
        inline app::Leaderboard__Enum* create() {
            return il2cpp::create_object<app::Leaderboard__Enum>(get_class());
        }
        inline app::Leaderboard__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Leaderboard__Enum__Array>(get_class(), size);
        }
    } // namespace Leaderboard__Enum
} // namespace app::classes::types
