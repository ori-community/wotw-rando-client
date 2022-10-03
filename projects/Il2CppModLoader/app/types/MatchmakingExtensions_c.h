#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakingExtensions_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MatchmakingExtensions_c__Class** type_info;
        inline app::MatchmakingExtensions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MatchmakingExtensions_c__Class>(type_info, "Moon.Race", "MatchmakingExtensions", "<>c");
        }
        inline app::MatchmakingExtensions_c* create() {
            return il2cpp::create_object<app::MatchmakingExtensions_c>(get_class());
        }
    } // namespace MatchmakingExtensions_c
} // namespace app::classes::types
