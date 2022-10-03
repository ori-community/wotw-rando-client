#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalStringComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalStringComparer__Class** type_info;
        inline app::InternalStringComparer__Class* get_class() {
            return il2cpp::get_class<app::InternalStringComparer__Class>(type_info, "System.Collections.Generic", "InternalStringComparer");
        }
        inline app::InternalStringComparer* create() {
            return il2cpp::create_object<app::InternalStringComparer>(get_class());
        }
    } // namespace InternalStringComparer
} // namespace app::classes::types
