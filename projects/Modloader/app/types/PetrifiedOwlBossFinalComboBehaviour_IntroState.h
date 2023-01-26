#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_IntroState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_IntroState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_IntroState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_IntroState__Class** type_info() {
            static app::PetrifiedOwlBossFinalComboBehaviour_IntroState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFinalComboBehaviour_IntroState__Class**)(modloader::win::memory::resolve_rva(0x0470B0F8));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_IntroState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_IntroState__Class>(type_info(), "", "PetrifiedOwlBossFinalComboBehaviour", "IntroState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_IntroState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_IntroState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_IntroState
} // namespace app::classes::types
