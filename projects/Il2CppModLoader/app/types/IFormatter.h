#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFormatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFormatter__Class** type_info;
        inline app::IFormatter__Class* get_class() {
            return il2cpp::get_class<app::IFormatter__Class>(type_info, "System.Runtime.Serialization", "IFormatter");
        }
    } // namespace IFormatter
} // namespace app::classes::types
