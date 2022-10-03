#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReferenceConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReferenceConverter__Class** type_info;
        inline app::ReferenceConverter__Class* get_class() {
            return il2cpp::get_class<app::ReferenceConverter__Class>(type_info, "System.ComponentModel", "ReferenceConverter");
        }
        inline app::ReferenceConverter* create() {
            return il2cpp::create_object<app::ReferenceConverter>(get_class());
        }
    } // namespace ReferenceConverter
} // namespace app::classes::types
