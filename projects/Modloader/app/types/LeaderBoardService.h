#pragma once
#include <Modloader/app/structs/LeaderBoardService.h>
#include <Modloader/app/structs/LeaderBoardService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderBoardService {
        inline app::LeaderBoardService__Class** type_info() {
            static app::LeaderBoardService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderBoardService__Class**)(modloader::win::memory::resolve_rva(0x04722088));
            }
            return cache;
        }
        inline app::LeaderBoardService__Class* get_class() {
            return il2cpp::get_class<app::LeaderBoardService__Class>(type_info(), "Moon.Race", "LeaderBoardService");
        }
        inline app::LeaderBoardService* create() {
            return il2cpp::create_object<app::LeaderBoardService>(get_class());
        }
    } // namespace LeaderBoardService
} // namespace app::classes::types
