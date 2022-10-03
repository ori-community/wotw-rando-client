#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExclusiveReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExclusiveReference__Class** type_info;
        inline app::ExclusiveReference__Class* get_class() {
            return il2cpp::get_class<app::ExclusiveReference__Class>(type_info, "System.Text.RegularExpressions", "ExclusiveReference");
        }
        inline app::ExclusiveReference* create() {
            return il2cpp::create_object<app::ExclusiveReference>(get_class());
        }
    } // namespace ExclusiveReference
} // namespace app::classes::types
