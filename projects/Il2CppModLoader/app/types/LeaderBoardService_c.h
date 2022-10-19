#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderBoardService_c {
        inline app::LeaderBoardService_c__Class** type_info = (app::LeaderBoardService_c__Class**)(modloader::win::memory::resolve_rva(0x0477DA70));
        inline app::LeaderBoardService_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderBoardService_c__Class>(type_info, "Moon.Race", "LeaderBoardService", "<>c");
        }
        inline app::LeaderBoardService_c* create() {
            return il2cpp::create_object<app::LeaderBoardService_c>(get_class());
        }
    } // namespace LeaderBoardService_c
} // namespace app::classes::types
