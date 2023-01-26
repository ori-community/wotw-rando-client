#pragma once
#include <Modloader/app/structs/PetrifiedOwlStompBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlStompBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlStompBehaviour {
        inline app::PetrifiedOwlStompBehaviour__Class** type_info() {
            static app::PetrifiedOwlStompBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlStompBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlStompBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlStompBehaviour__Class>(type_info(), "Moon", "PetrifiedOwlStompBehaviour");
        }
        inline app::PetrifiedOwlStompBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlStompBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlStompBehaviour
} // namespace app::classes::types
