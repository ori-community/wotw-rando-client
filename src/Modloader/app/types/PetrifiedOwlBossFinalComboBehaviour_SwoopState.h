#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_SwoopState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_SwoopState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFinalComboBehaviour_SwoopState {
        inline app::PetrifiedOwlBossFinalComboBehaviour_SwoopState__Class** type_info() {
            static app::PetrifiedOwlBossFinalComboBehaviour_SwoopState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFinalComboBehaviour_SwoopState__Class**)(modloader::win::memory::resolve_rva(0x04727E38));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_SwoopState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossFinalComboBehaviour_SwoopState__Class>(type_info(), "", "PetrifiedOwlBossFinalComboBehaviour", "SwoopState");
        }
        inline app::PetrifiedOwlBossFinalComboBehaviour_SwoopState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFinalComboBehaviour_SwoopState>(get_class());
        }
    } // namespace PetrifiedOwlBossFinalComboBehaviour_SwoopState
} // namespace app::classes::types
