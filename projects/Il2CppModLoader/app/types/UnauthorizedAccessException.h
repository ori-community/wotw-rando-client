#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnauthorizedAccessException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnauthorizedAccessException__Class** type_info;
        inline app::UnauthorizedAccessException__Class* get_class() {
            return il2cpp::get_class<app::UnauthorizedAccessException__Class>(type_info, "System", "UnauthorizedAccessException");
        }
        inline app::UnauthorizedAccessException* create() {
            return il2cpp::create_object<app::UnauthorizedAccessException>(get_class());
        }
    } // namespace UnauthorizedAccessException
} // namespace app::classes::types
