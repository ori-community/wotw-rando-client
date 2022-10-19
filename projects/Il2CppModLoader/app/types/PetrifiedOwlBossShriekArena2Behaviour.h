#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossShriekArena2Behaviour {
        inline app::PetrifiedOwlBossShriekArena2Behaviour__Class** type_info = (app::PetrifiedOwlBossShriekArena2Behaviour__Class**)(modloader::win::memory::resolve_rva(0x04730488));
        inline app::PetrifiedOwlBossShriekArena2Behaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossShriekArena2Behaviour__Class>(type_info, "", "PetrifiedOwlBossShriekArena2Behaviour");
        }
        inline app::PetrifiedOwlBossShriekArena2Behaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossShriekArena2Behaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossShriekArena2Behaviour
} // namespace app::classes::types
