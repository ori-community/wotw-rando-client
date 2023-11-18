#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1ClawSlamBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1ClawSlamBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1ClawSlamBehaviour {
        inline app::PetrifiedOwlBossFight1ClawSlamBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFight1ClawSlamBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossFight1ClawSlamBehaviour__Class**)(modloader::win::memory::resolve_rva(0x0478ECF8));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1ClawSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1ClawSlamBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFight1ClawSlamBehaviour");
        }
        inline app::PetrifiedOwlBossFight1ClawSlamBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1ClawSlamBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1ClawSlamBehaviour
} // namespace app::classes::types
