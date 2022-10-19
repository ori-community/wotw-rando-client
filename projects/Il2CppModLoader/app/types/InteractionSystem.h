#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionSystem {
        namespace {
            inline app::InteractionSystem__Class* type_info_ref = nullptr;
        }
        inline app::InteractionSystem__Class** type_info = &type_info_ref;
        inline app::InteractionSystem__Class* get_class() {
            return il2cpp::get_class<app::InteractionSystem__Class>(type_info, "RootMotion.FinalIK", "InteractionSystem");
        }
        inline app::InteractionSystem* create() {
            return il2cpp::create_object<app::InteractionSystem>(get_class());
        }
    } // namespace InteractionSystem
} // namespace app::classes::types
