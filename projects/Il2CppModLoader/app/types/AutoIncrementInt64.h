#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoIncrementInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutoIncrementInt64__Class** type_info;
        inline app::AutoIncrementInt64__Class* get_class() {
            return il2cpp::get_class<app::AutoIncrementInt64__Class>(type_info, "System.Data", "AutoIncrementInt64");
        }
        inline app::AutoIncrementInt64* create() {
            return il2cpp::create_object<app::AutoIncrementInt64>(get_class());
        }
    } // namespace AutoIncrementInt64
} // namespace app::classes::types
