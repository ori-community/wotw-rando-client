#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyWebProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmptyWebProxy__Class** type_info;
        inline app::EmptyWebProxy__Class* get_class() {
            return il2cpp::get_class<app::EmptyWebProxy__Class>(type_info, "System.Net", "EmptyWebProxy");
        }
        inline app::EmptyWebProxy* create() {
            return il2cpp::create_object<app::EmptyWebProxy>(get_class());
        }
    } // namespace EmptyWebProxy
} // namespace app::classes::types
