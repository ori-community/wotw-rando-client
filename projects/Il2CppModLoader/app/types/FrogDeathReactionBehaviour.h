#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrogDeathReactionBehaviour {
        namespace {
            app::FrogDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::FrogDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::FrogDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogDeathReactionBehaviour__Class>(type_info, "", "FrogDeathReactionBehaviour");
        }
        inline app::FrogDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::FrogDeathReactionBehaviour>(get_class());
        }
    } // namespace FrogDeathReactionBehaviour
} // namespace app::classes::types
