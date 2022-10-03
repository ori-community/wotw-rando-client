#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardHitReactionBehaviour {
        namespace {
            app::LizardHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::LizardHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardHitReactionBehaviour__Class>(type_info, "", "LizardHitReactionBehaviour");
        }
        inline app::LizardHitReactionBehaviour* create() {
            return il2cpp::create_object<app::LizardHitReactionBehaviour>(get_class());
        }
    } // namespace LizardHitReactionBehaviour
} // namespace app::classes::types
