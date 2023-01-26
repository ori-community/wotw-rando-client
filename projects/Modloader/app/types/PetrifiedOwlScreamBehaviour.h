#pragma once
#include <Modloader/app/structs/PetrifiedOwlScreamBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlScreamBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlScreamBehaviour {
        inline app::PetrifiedOwlScreamBehaviour__Class** type_info() {
            static app::PetrifiedOwlScreamBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlScreamBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlScreamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlScreamBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlScreamBehaviour");
        }
        inline app::PetrifiedOwlScreamBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlScreamBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlScreamBehaviour
} // namespace app::classes::types
