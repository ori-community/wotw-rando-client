#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1SideShriekBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1SideShriekBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1SideShriekBehaviour {
        inline app::PetrifiedOwlBossFight1SideShriekBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFight1SideShriekBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFight1SideShriekBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04714F90));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1SideShriekBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1SideShriekBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFight1SideShriekBehaviour");
        }
        inline app::PetrifiedOwlBossFight1SideShriekBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1SideShriekBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1SideShriekBehaviour
} // namespace app::classes::types
