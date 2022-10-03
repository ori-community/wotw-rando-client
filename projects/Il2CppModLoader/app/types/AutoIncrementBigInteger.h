#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoIncrementBigInteger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutoIncrementBigInteger__Class** type_info;
        inline app::AutoIncrementBigInteger__Class* get_class() {
            return il2cpp::get_class<app::AutoIncrementBigInteger__Class>(type_info, "System.Data", "AutoIncrementBigInteger");
        }
        inline app::AutoIncrementBigInteger* create() {
            return il2cpp::create_object<app::AutoIncrementBigInteger>(get_class());
        }
    } // namespace AutoIncrementBigInteger
} // namespace app::classes::types
