#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates {
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__Class** type_info() {
            static app::PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__Class**)(modloader::win::memory::resolve_rva(0x047106F8));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates__Class>(type_info(), "", "PetrifiedOwlBossDiveBombVerticalBehaviour", "DiveBombVerticalStates");
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombVerticalBehaviour_DiveBombVerticalStates
} // namespace app::classes::types
