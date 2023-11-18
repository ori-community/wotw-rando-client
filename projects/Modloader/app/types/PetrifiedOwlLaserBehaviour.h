#pragma once
#include <Modloader/app/structs/PetrifiedOwlLaserBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlLaserBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlLaserBehaviour {
        inline app::PetrifiedOwlLaserBehaviour__Class** type_info() {
            static app::PetrifiedOwlLaserBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlLaserBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlLaserBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlLaserBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlLaserBehaviour");
        }
        inline app::PetrifiedOwlLaserBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlLaserBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlLaserBehaviour
} // namespace app::classes::types
