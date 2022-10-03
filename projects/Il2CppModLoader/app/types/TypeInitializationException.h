#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeInitializationException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeInitializationException__Class** type_info;
        inline app::TypeInitializationException__Class* get_class() {
            return il2cpp::get_class<app::TypeInitializationException__Class>(type_info, "System", "TypeInitializationException");
        }
        inline app::TypeInitializationException* create() {
            return il2cpp::create_object<app::TypeInitializationException>(get_class());
        }
    } // namespace TypeInitializationException
} // namespace app::classes::types
