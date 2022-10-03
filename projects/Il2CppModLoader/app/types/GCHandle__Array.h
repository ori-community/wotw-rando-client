#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GCHandle__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GCHandle__Array__Class** type_info;
        inline app::GCHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::GCHandle__Array__Class>(type_info, "System.Runtime.InteropServices", "GCHandle[]");
        }
        inline app::GCHandle__Array* create() {
            return il2cpp::create_object<app::GCHandle__Array>(get_class());
        }
    } // namespace GCHandle__Array
} // namespace app::classes::types
