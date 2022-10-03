#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPHostEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPHostEntry__Class** type_info;
        inline app::IPHostEntry__Class* get_class() {
            return il2cpp::get_class<app::IPHostEntry__Class>(type_info, "System.Net", "IPHostEntry");
        }
        inline app::IPHostEntry* create() {
            return il2cpp::create_object<app::IPHostEntry>(get_class());
        }
    } // namespace IPHostEntry
} // namespace app::classes::types
