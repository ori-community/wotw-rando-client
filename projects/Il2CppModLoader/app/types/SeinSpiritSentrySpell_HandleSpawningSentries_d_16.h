#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritSentrySpell_HandleSpawningSentries_d_16 {
        inline app::SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Class** type_info = (app::SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Class**)(modloader::win::memory::resolve_rva(0x047526D0));
        inline app::SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSpiritSentrySpell_HandleSpawningSentries_d_16__Class>(type_info, "", "SeinSpiritSentrySpell", "<HandleSpawningSentries>d__16");
        }
        inline app::SeinSpiritSentrySpell_HandleSpawningSentries_d_16* create() {
            return il2cpp::create_object<app::SeinSpiritSentrySpell_HandleSpawningSentries_d_16>(get_class());
        }
    } // namespace SeinSpiritSentrySpell_HandleSpawningSentries_d_16
} // namespace app::classes::types
