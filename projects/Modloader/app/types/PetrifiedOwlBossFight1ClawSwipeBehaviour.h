#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1ClawSwipeBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1ClawSwipeBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1ClawSwipeBehaviour {
        inline app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0478C980));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1ClawSwipeBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFight1ClawSwipeBehaviour");
        }
        inline app::PetrifiedOwlBossFight1ClawSwipeBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1ClawSwipeBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1ClawSwipeBehaviour
} // namespace app::classes::types
