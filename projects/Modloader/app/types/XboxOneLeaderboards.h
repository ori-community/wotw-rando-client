#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxOneLeaderboards__Class.h>
#include <Modloader/app/structs/XboxOneLeaderboards.h>

namespace app::classes::types {
    namespace XboxOneLeaderboards {
        inline app::XboxOneLeaderboards__Class** type_info = (app::XboxOneLeaderboards__Class**)(modloader::win::memory::resolve_rva(0x04761B48));
        inline app::XboxOneLeaderboards__Class* get_class() {
            return il2cpp::get_class<app::XboxOneLeaderboards__Class>(type_info, "", "XboxOneLeaderboards");
        }
        inline app::XboxOneLeaderboards* create() {
            return il2cpp::create_object<app::XboxOneLeaderboards>(get_class());
        }
    } // namespace XboxOneLeaderboards
} // namespace app::classes::types
