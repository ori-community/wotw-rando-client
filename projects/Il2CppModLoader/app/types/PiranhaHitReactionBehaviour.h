#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PiranhaHitReactionBehaviour {
        namespace {
            app::PiranhaHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::PiranhaHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaHitReactionBehaviour__Class>(type_info, "", "PiranhaHitReactionBehaviour");
        }
        inline app::PiranhaHitReactionBehaviour* create() {
            return il2cpp::create_object<app::PiranhaHitReactionBehaviour>(get_class());
        }
    } // namespace PiranhaHitReactionBehaviour
} // namespace app::classes::types
