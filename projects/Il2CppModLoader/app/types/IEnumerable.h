#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEnumerable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEnumerable__Class** type_info;
        inline app::IEnumerable__Class* get_class() {
            return il2cpp::get_class<app::IEnumerable__Class>(type_info, "System.Collections", "IEnumerable");
        }
    } // namespace IEnumerable
} // namespace app::classes::types
