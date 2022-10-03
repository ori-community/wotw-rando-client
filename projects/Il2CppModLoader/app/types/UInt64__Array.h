#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt64__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt64__Array__Class** type_info;
        inline app::UInt64__Array__Class* get_class() {
            return il2cpp::get_class<app::UInt64__Array__Class>(type_info, "System", "UInt64[]");
        }
        inline app::UInt64__Array* create() {
            return il2cpp::create_object<app::UInt64__Array>(get_class());
        }
    } // namespace UInt64__Array
} // namespace app::classes::types
