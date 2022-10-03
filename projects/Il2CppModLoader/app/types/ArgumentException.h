#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArgumentException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArgumentException__Class** type_info;
        inline app::ArgumentException__Class* get_class() {
            return il2cpp::get_class<app::ArgumentException__Class>(type_info, "System", "ArgumentException");
        }
        inline app::ArgumentException* create() {
            return il2cpp::create_object<app::ArgumentException>(get_class());
        }
    } // namespace ArgumentException
} // namespace app::classes::types
