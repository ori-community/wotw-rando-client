#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int32__Array_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int32__Array_1__Class** type_info;
        inline app::Int32__Array_1__Class* get_class() {
            return il2cpp::get_class<app::Int32__Array_1__Class>(type_info, "System", "Int32[,,]");
        }
        inline app::Int32__Array_1* create() {
            return il2cpp::create_object<app::Int32__Array_1>(get_class());
        }
    } // namespace Int32__Array_1
} // namespace app::classes::types
