#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionSystem {
        namespace {
            app::InteractionSystem__Class* type_info_ref = nullptr;
        }
        app::InteractionSystem__Class** type_info = &type_info_ref;
        inline app::InteractionSystem__Class* get_class() {
            return il2cpp::get_class<app::InteractionSystem__Class>(type_info, "RootMotion.FinalIK", "InteractionSystem");
        }
        inline app::InteractionSystem* create() {
            return il2cpp::create_object<app::InteractionSystem>(get_class());
        }
    } // namespace InteractionSystem
} // namespace app::classes::types
