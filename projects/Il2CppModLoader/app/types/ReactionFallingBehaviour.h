#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReactionFallingBehaviour {
        namespace {
            app::ReactionFallingBehaviour__Class* type_info_ref = nullptr;
        }
        app::ReactionFallingBehaviour__Class** type_info = &type_info_ref;
        inline app::ReactionFallingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ReactionFallingBehaviour__Class>(type_info, "", "ReactionFallingBehaviour");
        }
        inline app::ReactionFallingBehaviour* create() {
            return il2cpp::create_object<app::ReactionFallingBehaviour>(get_class());
        }
    } // namespace ReactionFallingBehaviour
} // namespace app::classes::types
