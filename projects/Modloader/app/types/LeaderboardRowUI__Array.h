#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaderboardRowUI__Array__Class.h>
#include <Modloader/app/structs/LeaderboardRowUI__Array.h>

namespace app::classes::types {
    namespace LeaderboardRowUI__Array {
        namespace {
            inline app::LeaderboardRowUI__Array__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardRowUI__Array__Class** type_info = &type_info_ref;
        inline app::LeaderboardRowUI__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardRowUI__Array__Class>(type_info, "", "LeaderboardRowUI[]");
        }
        inline app::LeaderboardRowUI__Array* create() {
            return il2cpp::create_object<app::LeaderboardRowUI__Array>(get_class());
        }
    } // namespace LeaderboardRowUI__Array
} // namespace app::classes::types
