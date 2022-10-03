#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderBoardService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaderBoardService__Class** type_info;
        inline app::LeaderBoardService__Class* get_class() {
            return il2cpp::get_class<app::LeaderBoardService__Class>(type_info, "Moon.Race", "LeaderBoardService");
        }
        inline app::LeaderBoardService* create() {
            return il2cpp::create_object<app::LeaderBoardService>(get_class());
        }
    } // namespace LeaderBoardService
} // namespace app::classes::types
