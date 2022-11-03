#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates {
        inline app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates__Class** type_info = (app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates__Class**)(modloader::win::memory::resolve_rva(0x0478F328));
        inline app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates__Class>(type_info, "", "PetrifiedOwlBossTripleSlamBehaviour", "TripleSlamStates");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates
} // namespace app::classes::types
