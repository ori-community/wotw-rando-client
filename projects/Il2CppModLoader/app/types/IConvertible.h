#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IConvertible {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IConvertible__Class** type_info;
        inline app::IConvertible__Class* get_class() {
            return il2cpp::get_class<app::IConvertible__Class>(type_info, "System", "IConvertible");
        }
    } // namespace IConvertible
} // namespace app::classes::types
