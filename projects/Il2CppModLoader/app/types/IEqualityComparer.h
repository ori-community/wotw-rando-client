#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEqualityComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEqualityComparer__Class** type_info;
        inline app::IEqualityComparer__Class* get_class() {
            return il2cpp::get_class<app::IEqualityComparer__Class>(type_info, "System.Collections", "IEqualityComparer");
        }
    } // namespace IEqualityComparer
} // namespace app::classes::types
