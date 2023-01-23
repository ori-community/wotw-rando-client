#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaderBoardEntry__Array__Class.h>
#include <Modloader/app/structs/LeaderBoardEntry__Array.h>

namespace app::classes::types {
    namespace LeaderBoardEntry__Array {
        namespace {
            inline app::LeaderBoardEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::LeaderBoardEntry__Array__Class** type_info = &type_info_ref;
        inline app::LeaderBoardEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaderBoardEntry__Array__Class>(type_info, "Moon.Race", "LeaderBoardEntry[]");
        }
        inline app::LeaderBoardEntry__Array* create() {
            return il2cpp::create_object<app::LeaderBoardEntry__Array>(get_class());
        }
    } // namespace LeaderBoardEntry__Array
} // namespace app::classes::types
