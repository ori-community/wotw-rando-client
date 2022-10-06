#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderBoardEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaderBoardEntry__Class** type_info;
        inline app::LeaderBoardEntry__Class* get_class() {
            return il2cpp::get_class<app::LeaderBoardEntry__Class>(type_info, "Moon.Race", "LeaderBoardEntry");
        }
        inline app::LeaderBoardEntry* create() {
            return il2cpp::create_object<app::LeaderBoardEntry>(get_class());
        }
        inline app::LeaderBoardEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::LeaderBoardEntry__Array>(get_class(), size);
        }
        inline app::LeaderBoardEntry__Array* create_array(const std::vector<app::LeaderBoardEntry*>& items) {
            return il2cpp::array_new<app::LeaderBoardEntry__Array>(get_class(), items);
        }
    } // namespace LeaderBoardEntry
} // namespace app::classes::types
