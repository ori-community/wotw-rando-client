#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int16__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int16__Array__Class** type_info;
        inline app::Int16__Array__Class* get_class() {
            return il2cpp::get_class<app::Int16__Array__Class>(type_info, "System", "Int16[]");
        }
        inline app::Int16__Array* create() {
            return il2cpp::create_object<app::Int16__Array>(get_class());
        }
    } // namespace Int16__Array
} // namespace app::classes::types
