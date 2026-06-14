#pragma once
#include <Modloader/app/structs/LeaderboardB__Enum.h>
#include <Modloader/app/structs/LeaderboardB__Enum__Array.h>
#include <Modloader/app/structs/LeaderboardB__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardB__Enum {
        inline app::LeaderboardB__Enum__Class** type_info() {
            static app::LeaderboardB__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboardB__Enum__Class**)(modloader::win::memory::resolve_rva(0x047101F0));
            }
            return cache;
        }
        inline app::LeaderboardB__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardB__Enum__Class>(type_info(), "", "LeaderboardB");
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
