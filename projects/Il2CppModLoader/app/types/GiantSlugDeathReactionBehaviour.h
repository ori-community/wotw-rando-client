#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GiantSlugDeathReactionBehaviour {
        namespace {
            app::GiantSlugDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::GiantSlugDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::GiantSlugDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GiantSlugDeathReactionBehaviour__Class>(type_info, "", "GiantSlugDeathReactionBehaviour");
        }
        inline app::GiantSlugDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::GiantSlugDeathReactionBehaviour>(get_class());
        }
    } // namespace GiantSlugDeathReactionBehaviour
} // namespace app::classes::types
