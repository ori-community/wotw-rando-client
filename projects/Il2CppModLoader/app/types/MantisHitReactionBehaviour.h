#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisHitReactionBehaviour {
        namespace {
            app::MantisHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::MantisHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MantisHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisHitReactionBehaviour__Class>(type_info, "", "MantisHitReactionBehaviour");
        }
        inline app::MantisHitReactionBehaviour* create() {
            return il2cpp::create_object<app::MantisHitReactionBehaviour>(get_class());
        }
    } // namespace MantisHitReactionBehaviour
} // namespace app::classes::types
