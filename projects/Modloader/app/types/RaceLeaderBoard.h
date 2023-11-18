#pragma once
#include <Modloader/app/structs/RaceLeaderBoard.h>
#include <Modloader/app/structs/RaceLeaderBoard__Array.h>
#include <Modloader/app/structs/RaceLeaderBoard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderBoard {
        inline app::RaceLeaderBoard__Class** type_info() {
            static app::RaceLeaderBoard__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceLeaderBoard__Class**)(modloader::win::memory::resolve_rva(0x0470E000));
            }
            return cache;
        }
        inline app::RaceLeaderBoard__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderBoard__Class>(type_info(), "Moon.Race", "RaceLeaderBoard");
        }
        inline app::RaceLeaderBoard* create() {
            return il2cpp::create_object<app::RaceLeaderBoard>(get_class());
        }
        inline app::RaceLeaderBoard__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceLeaderBoard__Array>(get_class(), size);
        }
        inline app::RaceLeaderBoard__Array* create_array(const std::vector<app::RaceLeaderBoard*>& items) {
            return il2cpp::array_new<app::RaceLeaderBoard__Array>(get_class(), items);
        }
    } // namespace RaceLeaderBoard
} // namespace app::classes::types
