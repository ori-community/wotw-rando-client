#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUberState__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IUberState__Array__Class** type_info;
        inline app::IUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::IUberState__Array__Class>(type_info, "Moon", "IUberState[]");
        }
        inline app::IUberState__Array* create() {
            return il2cpp::create_object<app::IUberState__Array>(get_class());
        }
    } // namespace IUberState__Array
} // namespace app::classes::types
