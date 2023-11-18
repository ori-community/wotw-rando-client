#pragma once
#include <Modloader/app/structs/LeaderBoardEntry__Array.h>
#include <Modloader/app/structs/LeaderBoardEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderBoardEntry__Array {
        inline app::LeaderBoardEntry__Array__Class** type_info() {
            static app::LeaderBoardEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderBoardEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderBoardEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaderBoardEntry__Array__Class>(type_info(), "Moon.Race", "LeaderBoardEntry[]");
        }
        inline app::LeaderBoardEntry__Array* create() {
            return il2cpp::create_object<app::LeaderBoardEntry__Array>(get_class());
        }
    } // namespace LeaderBoardEntry__Array
} // namespace app::classes::types
