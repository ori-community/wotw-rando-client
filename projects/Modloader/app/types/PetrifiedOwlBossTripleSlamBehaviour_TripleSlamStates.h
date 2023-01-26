#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates.h>
#include <Modloader/app/structs/PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates {
        inline app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates__Class** type_info() {
            static app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates__Class**)(modloader::win::memory::resolve_rva(0x0478F328));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates__Class>(type_info(), "", "PetrifiedOwlBossTripleSlamBehaviour", "TripleSlamStates");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates
} // namespace app::classes::types
