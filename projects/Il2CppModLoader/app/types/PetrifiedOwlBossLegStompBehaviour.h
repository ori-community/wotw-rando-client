#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLegStompBehaviour {
        inline app::PetrifiedOwlBossLegStompBehaviour__Class** type_info = (app::PetrifiedOwlBossLegStompBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0476E118));
        inline app::PetrifiedOwlBossLegStompBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLegStompBehaviour__Class>(type_info, "", "PetrifiedOwlBossLegStompBehaviour");
        }
        inline app::PetrifiedOwlBossLegStompBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLegStompBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLegStompBehaviour
} // namespace app::classes::types
