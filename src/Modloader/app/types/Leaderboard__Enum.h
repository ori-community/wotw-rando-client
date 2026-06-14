#pragma once
#include <Modloader/app/structs/Leaderboard__Enum.h>
#include <Modloader/app/structs/Leaderboard__Enum__Array.h>
#include <Modloader/app/structs/Leaderboard__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Leaderboard__Enum {
        inline app::Leaderboard__Enum__Class** type_info() {
            static app::Leaderboard__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Leaderboard__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743458));
            }
            return cache;
        }
        inline app::Leaderboard__Enum__Class* get_class() {
            return il2cpp::get_class<app::Leaderboard__Enum__Class>(type_info(), "", "Leaderboard");
        }
        inline app::Leaderboard__Enum* create() {
            return il2cpp::create_object<app::Leaderboard__Enum>(get_class());
        }
        inline app::Leaderboard__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Leaderboard__Enum__Array>(get_class(), size);
        }
        inline app::Leaderboard__Enum__Array* create_array(const std::vector<app::Leaderboard__Enum*>& items) {
            return il2cpp::array_new<app::Leaderboard__Enum__Array>(get_class(), items);
        }
    } // namespace Leaderboard__Enum
} // namespace app::classes::types
