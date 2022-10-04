#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPuppet__Class** type_info;
        inline app::IPuppet__Class* get_class() {
            return il2cpp::get_class<app::IPuppet__Class>(type_info, "", "IPuppet");
        }
    } // namespace IPuppet
} // namespace app::classes::types
