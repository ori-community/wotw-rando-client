#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDesiredUberState__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDesiredUberState__Array__Class** type_info;
        inline app::IDesiredUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::IDesiredUberState__Array__Class>(type_info, "", "IDesiredUberState[]");
        }
        inline app::IDesiredUberState__Array* create() {
            return il2cpp::create_object<app::IDesiredUberState__Array>(get_class());
        }
    } // namespace IDesiredUberState__Array
} // namespace app::classes::types
