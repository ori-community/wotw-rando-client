#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAlignable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAlignable__Class** type_info;
        inline app::IAlignable__Class* get_class() {
            return il2cpp::get_class<app::IAlignable__Class>(type_info, "", "IAlignable");
        }
        inline app::IAlignable* create() {
            return il2cpp::create_object<app::IAlignable>(get_class());
        }
    } // namespace IAlignable
} // namespace app::classes::types
