#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITransitionOwner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITransitionOwner__Class** type_info;
        inline app::ITransitionOwner__Class* get_class() {
            return il2cpp::get_class<app::ITransitionOwner__Class>(type_info, "Moon", "ITransitionOwner");
        }
        inline app::ITransitionOwner* create() {
            return il2cpp::create_object<app::ITransitionOwner>(get_class());
        }
    } // namespace ITransitionOwner
} // namespace app::classes::types
