#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MissingMethodException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MissingMethodException__Class** type_info;
        inline app::MissingMethodException__Class* get_class() {
            return il2cpp::get_class<app::MissingMethodException__Class>(type_info, "System", "MissingMethodException");
        }
        inline app::MissingMethodException* create() {
            return il2cpp::create_object<app::MissingMethodException>(get_class());
        }
    } // namespace MissingMethodException
} // namespace app::classes::types
