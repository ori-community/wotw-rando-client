#pragma once
#include <Modloader/app/structs/LeaderBoardService_c.h>
#include <Modloader/app/structs/LeaderBoardService_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderBoardService_c {
        inline app::LeaderBoardService_c__Class** type_info() {
            static app::LeaderBoardService_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderBoardService_c__Class**)(modloader::win::memory::resolve_rva(0x0477DA70));
            }
            return cache;
        }
        inline app::LeaderBoardService_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderBoardService_c__Class>(type_info(), "Moon.Race", "LeaderBoardService", "<>c");
        }
        inline app::LeaderBoardService_c* create() {
            return il2cpp::create_object<app::LeaderBoardService_c>(get_class());
        }
    } // namespace LeaderBoardService_c
} // namespace app::classes::types
