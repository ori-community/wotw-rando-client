#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDataProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDataProvider__Class** type_info;
        inline app::IDataProvider__Class* get_class() {
            return il2cpp::get_class<app::IDataProvider__Class>(type_info, "SystemIntegration.Synchronizer", "IDataProvider");
        }
    } // namespace IDataProvider
} // namespace app::classes::types
