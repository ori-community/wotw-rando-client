#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_Point__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VerletBodyIndexed_Point__Array__Class** type_info;
        inline app::VerletBodyIndexed_Point__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBodyIndexed_Point__Array__Class>(type_info, "Moon", "VerletBodyIndexed+Point[]");
        }
        inline app::VerletBodyIndexed_Point__Array* create() {
            return il2cpp::create_object<app::VerletBodyIndexed_Point__Array>(get_class());
        }
    } // namespace VerletBodyIndexed_Point__Array
} // namespace app::classes::types
