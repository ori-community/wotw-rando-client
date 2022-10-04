#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IComparable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IComparable__Class** type_info;
        inline app::IComparable__Class* get_class() {
            return il2cpp::get_class<app::IComparable__Class>(type_info, "System", "IComparable");
        }
    } // namespace IComparable
} // namespace app::classes::types
