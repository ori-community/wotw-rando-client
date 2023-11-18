#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight1StartBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1StartBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight1StartBehaviour {
        inline app::PetrifiedOwlBossFight1StartBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFight1StartBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossFight1StartBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight1StartBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight1StartBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFight1StartBehaviour");
        }
        inline app::PetrifiedOwlBossFight1StartBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight1StartBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight1StartBehaviour
} // namespace app::classes::types
