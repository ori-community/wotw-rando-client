#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Encoding__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Encoding__Array__Class** type_info;
        inline app::Encoding__Array__Class* get_class() {
            return il2cpp::get_class<app::Encoding__Array__Class>(type_info, "System.Text", "Encoding[]");
        }
        inline app::Encoding__Array* create() {
            return il2cpp::create_object<app::Encoding__Array>(get_class());
        }
    } // namespace Encoding__Array
} // namespace app::classes::types
