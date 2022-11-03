#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakingExtensions_c {
        inline app::MatchmakingExtensions_c__Class** type_info = (app::MatchmakingExtensions_c__Class**)(modloader::win::memory::resolve_rva(0x04772010));
        inline app::MatchmakingExtensions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MatchmakingExtensions_c__Class>(type_info, "Moon.Race", "MatchmakingExtensions", "<>c");
        }
        inline app::MatchmakingExtensions_c* create() {
            return il2cpp::create_object<app::MatchmakingExtensions_c>(get_class());
        }
    } // namespace MatchmakingExtensions_c
} // namespace app::classes::types
