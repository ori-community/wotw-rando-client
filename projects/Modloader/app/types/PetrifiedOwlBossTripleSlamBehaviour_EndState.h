#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour_EndState {
        inline app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class** type_info = (app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class**)(modloader::win::memory::resolve_rva(0x047587F8));
        inline app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossTripleSlamBehaviour_EndState__Class>(type_info, "", "PetrifiedOwlBossTripleSlamBehaviour", "EndState");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_EndState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour_EndState>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour_EndState
} // namespace app::classes::types
