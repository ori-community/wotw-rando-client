#pragma once
#include <Modloader/app/structs/StressTestPlaylist.h>
#include <Modloader/app/structs/StressTestPlaylist__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTestPlaylist {
        inline app::StressTestPlaylist__Class** type_info() {
            static app::StressTestPlaylist__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StressTestPlaylist__Class**)(modloader::win::memory::resolve_rva(0x0477F7E0));
            }
            return cache;
        }
        inline app::StressTestPlaylist__Class* get_class() {
            return il2cpp::get_class<app::StressTestPlaylist__Class>(type_info(), "", "StressTestPlaylist");
        }
        inline app::StressTestPlaylist* create() {
            return il2cpp::create_object<app::StressTestPlaylist>(get_class());
        }
    } // namespace StressTestPlaylist
} // namespace app::classes::types
