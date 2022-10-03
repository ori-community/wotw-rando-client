#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballHitReactionBehaviour {
        namespace {
            app::GasballHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::GasballHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::GasballHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GasballHitReactionBehaviour__Class>(type_info, "", "GasballHitReactionBehaviour");
        }
        inline app::GasballHitReactionBehaviour* create() {
            return il2cpp::create_object<app::GasballHitReactionBehaviour>(get_class());
        }
    } // namespace GasballHitReactionBehaviour
} // namespace app::classes::types
