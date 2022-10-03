#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlStompBehaviour {
        namespace {
            app::PetrifiedOwlStompBehaviour__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlStompBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlStompBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlStompBehaviour__Class>(type_info, "Moon", "PetrifiedOwlStompBehaviour");
        }
        inline app::PetrifiedOwlStompBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlStompBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlStompBehaviour
} // namespace app::classes::types
