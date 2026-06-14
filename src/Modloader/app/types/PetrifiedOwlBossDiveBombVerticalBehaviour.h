#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDiveBombVerticalBehaviour {
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04716968));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossDiveBombVerticalBehaviour__Class>(type_info(), "", "PetrifiedOwlBossDiveBombVerticalBehaviour");
        }
        inline app::PetrifiedOwlBossDiveBombVerticalBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDiveBombVerticalBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossDiveBombVerticalBehaviour
} // namespace app::classes::types
