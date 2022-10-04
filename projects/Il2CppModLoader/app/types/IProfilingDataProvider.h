#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IProfilingDataProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IProfilingDataProvider__Class** type_info;
        inline app::IProfilingDataProvider__Class* get_class() {
            return il2cpp::get_class<app::IProfilingDataProvider__Class>(type_info, "Moon", "IProfilingDataProvider");
        }
    } // namespace IProfilingDataProvider
} // namespace app::classes::types
