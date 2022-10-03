#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Utility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Utility__Class** type_info;
        inline app::Utility__Class* get_class() {
            return il2cpp::get_class<app::Utility__Class>(type_info, "", "Utility");
        }
        inline app::Utility* create() {
            return il2cpp::create_object<app::Utility>(get_class());
        }
    } // namespace Utility
} // namespace app::classes::types
