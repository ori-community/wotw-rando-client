#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StressTestPlaylist__Class.h>
#include <Modloader/app/structs/StressTestPlaylist.h>

namespace app::classes::types {
    namespace StressTestPlaylist {
        inline app::StressTestPlaylist__Class** type_info = (app::StressTestPlaylist__Class**)(modloader::win::memory::resolve_rva(0x0477F7E0));
        inline app::StressTestPlaylist__Class* get_class() {
            return il2cpp::get_class<app::StressTestPlaylist__Class>(type_info, "", "StressTestPlaylist");
        }
        inline app::StressTestPlaylist* create() {
            return il2cpp::create_object<app::StressTestPlaylist>(get_class());
        }
    } // namespace StressTestPlaylist
} // namespace app::classes::types
