#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDisposable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDisposable__Class** type_info;
        inline app::IDisposable__Class* get_class() {
            return il2cpp::get_class<app::IDisposable__Class>(type_info, "System", "IDisposable");
        }
    } // namespace IDisposable
} // namespace app::classes::types
