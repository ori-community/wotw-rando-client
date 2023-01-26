#pragma once
#include <Modloader/app/structs/MatchmakingExtensions_c_DisplayClass1_0.h>
#include <Modloader/app/structs/MatchmakingExtensions_c_DisplayClass1_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingExtensions_c_DisplayClass1_0 {
        inline app::MatchmakingExtensions_c_DisplayClass1_0__Class** type_info() {
            static app::MatchmakingExtensions_c_DisplayClass1_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MatchmakingExtensions_c_DisplayClass1_0__Class**)(modloader::win::memory::resolve_rva(0x04782DB0));
            }
            return cache;
        }
        inline app::MatchmakingExtensions_c_DisplayClass1_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MatchmakingExtensions_c_DisplayClass1_0__Class>(type_info(), "Moon.Race", "MatchmakingExtensions", "<>c__DisplayClass1_0");
        }
        inline app::MatchmakingExtensions_c_DisplayClass1_0* create() {
            return il2cpp::create_object<app::MatchmakingExtensions_c_DisplayClass1_0>(get_class());
        }
    } // namespace MatchmakingExtensions_c_DisplayClass1_0
} // namespace app::classes::types
