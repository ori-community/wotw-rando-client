#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ELeaderboardDataRequest__Enum__Class.h>
#include <Modloader/app/structs/ELeaderboardDataRequest__Enum.h>

namespace app::classes::types {
    namespace ELeaderboardDataRequest__Enum {
        namespace {
            inline app::ELeaderboardDataRequest__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ELeaderboardDataRequest__Enum__Class** type_info = &type_info_ref;
        inline app::ELeaderboardDataRequest__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELeaderboardDataRequest__Enum__Class>(type_info, "Steamworks", "ELeaderboardDataRequest");
        }
        inline app::ELeaderboardDataRequest__Enum* create() {
            return il2cpp::create_object<app::ELeaderboardDataRequest__Enum>(get_class());
        }
    } // namespace ELeaderboardDataRequest__Enum
} // namespace app::classes::types
