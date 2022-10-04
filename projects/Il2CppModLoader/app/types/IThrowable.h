#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IThrowable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IThrowable__Class** type_info;
        inline app::IThrowable__Class* get_class() {
            return il2cpp::get_class<app::IThrowable__Class>(type_info, "Moon", "IThrowable");
        }
    } // namespace IThrowable
} // namespace app::classes::types
