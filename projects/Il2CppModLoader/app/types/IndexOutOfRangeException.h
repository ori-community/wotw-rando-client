#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IndexOutOfRangeException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IndexOutOfRangeException__Class** type_info;
        inline app::IndexOutOfRangeException__Class* get_class() {
            return il2cpp::get_class<app::IndexOutOfRangeException__Class>(type_info, "System", "IndexOutOfRangeException");
        }
        inline app::IndexOutOfRangeException* create() {
            return il2cpp::create_object<app::IndexOutOfRangeException>(get_class());
        }
    } // namespace IndexOutOfRangeException
} // namespace app::classes::types
