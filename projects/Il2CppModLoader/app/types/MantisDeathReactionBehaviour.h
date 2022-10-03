#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisDeathReactionBehaviour {
        namespace {
            app::MantisDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::MantisDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MantisDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisDeathReactionBehaviour__Class>(type_info, "", "MantisDeathReactionBehaviour");
        }
        inline app::MantisDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::MantisDeathReactionBehaviour>(get_class());
        }
    } // namespace MantisDeathReactionBehaviour
} // namespace app::classes::types
