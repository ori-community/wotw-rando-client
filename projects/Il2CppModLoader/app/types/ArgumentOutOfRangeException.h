#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArgumentOutOfRangeException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArgumentOutOfRangeException__Class** type_info;
        inline app::ArgumentOutOfRangeException__Class* get_class() {
            return il2cpp::get_class<app::ArgumentOutOfRangeException__Class>(type_info, "System", "ArgumentOutOfRangeException");
        }
        inline app::ArgumentOutOfRangeException* create() {
            return il2cpp::create_object<app::ArgumentOutOfRangeException>(get_class());
        }
    } // namespace ArgumentOutOfRangeException
} // namespace app::classes::types
