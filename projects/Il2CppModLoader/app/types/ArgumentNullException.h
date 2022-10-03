#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArgumentNullException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArgumentNullException__Class** type_info;
        inline app::ArgumentNullException__Class* get_class() {
            return il2cpp::get_class<app::ArgumentNullException__Class>(type_info, "System", "ArgumentNullException");
        }
        inline app::ArgumentNullException* create() {
            return il2cpp::create_object<app::ArgumentNullException>(get_class());
        }
    } // namespace ArgumentNullException
} // namespace app::classes::types
