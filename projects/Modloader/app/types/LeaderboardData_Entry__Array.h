#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaderboardData_Entry__Array__Class.h>
#include <Modloader/app/structs/LeaderboardData_Entry__Array.h>

namespace app::classes::types {
    namespace LeaderboardData_Entry__Array {
        namespace {
            inline app::LeaderboardData_Entry__Array__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardData_Entry__Array__Class** type_info = &type_info_ref;
        inline app::LeaderboardData_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardData_Entry__Array__Class>(type_info, "", "LeaderboardData+Entry[]");
        }
        inline app::LeaderboardData_Entry__Array* create() {
            return il2cpp::create_object<app::LeaderboardData_Entry__Array>(get_class());
        }
    } // namespace LeaderboardData_Entry__Array
} // namespace app::classes::types
