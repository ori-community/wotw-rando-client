#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SharedReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SharedReference__Class** type_info;
        inline app::SharedReference__Class* get_class() {
            return il2cpp::get_class<app::SharedReference__Class>(type_info, "System.Text.RegularExpressions", "SharedReference");
        }
        inline app::SharedReference* create() {
            return il2cpp::create_object<app::SharedReference>(get_class());
        }
    } // namespace SharedReference
} // namespace app::classes::types
