#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rope_LinkData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Rope_LinkData__Array__Class** type_info;
        inline app::Rope_LinkData__Array__Class* get_class() {
            return il2cpp::get_class<app::Rope_LinkData__Array__Class>(type_info, "", "Rope+LinkData[]");
        }
        inline app::Rope_LinkData__Array* create() {
            return il2cpp::create_object<app::Rope_LinkData__Array>(get_class());
        }
    } // namespace Rope_LinkData__Array
} // namespace app::classes::types
