#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFilter__Class** type_info;
        inline app::IFilter__Class* get_class() {
            return il2cpp::get_class<app::IFilter__Class>(type_info, "System.Data", "IFilter");
        }
    } // namespace IFilter
} // namespace app::classes::types
