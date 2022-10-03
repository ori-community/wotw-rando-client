#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectEqualityComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectEqualityComparer__Class** type_info;
        inline app::ObjectEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::ObjectEqualityComparer__Class>(type_info, "System.Collections.Generic", "ObjectEqualityComparer");
        }
        inline app::ObjectEqualityComparer* create() {
            return il2cpp::create_object<app::ObjectEqualityComparer>(get_class());
        }
    } // namespace ObjectEqualityComparer
} // namespace app::classes::types
