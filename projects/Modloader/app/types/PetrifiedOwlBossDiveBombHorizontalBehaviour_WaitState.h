#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState {
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class** type_info() {
            static app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class**)(modloader::win::memory::resolve_rva(0x047233C0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState__Class>(type_info(), "", "PetrifiedOwlBossDiveBombHorizontalBehaviour", "WaitState");
        }
        inline app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombHorizontalBehaviour_WaitState
} // namespace app::classes::types
