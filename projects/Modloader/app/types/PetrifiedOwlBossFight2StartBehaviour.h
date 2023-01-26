#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossFight2StartBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight2StartBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFight2StartBehaviour {
        inline app::PetrifiedOwlBossFight2StartBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossFight2StartBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossFight2StartBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossFight2StartBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFight2StartBehaviour__Class>(type_info(), "", "PetrifiedOwlBossFight2StartBehaviour");
        }
        inline app::PetrifiedOwlBossFight2StartBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFight2StartBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFight2StartBehaviour
} // namespace app::classes::types
