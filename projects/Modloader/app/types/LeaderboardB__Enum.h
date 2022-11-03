#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardB__Enum {
        inline app::LeaderboardB__Enum__Class** type_info = (app::LeaderboardB__Enum__Class**)(modloader::win::memory::resolve_rva(0x047101F0));
        inline app::LeaderboardB__Enum__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardB__Enum__Class>(type_info, "", "LeaderboardB");
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
