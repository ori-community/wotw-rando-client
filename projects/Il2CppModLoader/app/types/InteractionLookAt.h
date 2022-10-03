#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionLookAt {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionLookAt__Class** type_info;
        inline app::InteractionLookAt__Class* get_class() {
            return il2cpp::get_class<app::InteractionLookAt__Class>(type_info, "RootMotion.FinalIK", "InteractionLookAt");
        }
        inline app::InteractionLookAt* create() {
            return il2cpp::create_object<app::InteractionLookAt>(get_class());
        }
    } // namespace InteractionLookAt
} // namespace app::classes::types
