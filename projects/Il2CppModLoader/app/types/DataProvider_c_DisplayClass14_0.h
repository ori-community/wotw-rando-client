#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataProvider_c_DisplayClass14_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataProvider_c_DisplayClass14_0__Class** type_info;
        inline app::DataProvider_c_DisplayClass14_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DataProvider_c_DisplayClass14_0__Class>(type_info, "SystemIntegration.Synchronizer", "DataProvider", "<>c__DisplayClass14_0");
        }
        inline app::DataProvider_c_DisplayClass14_0* create() {
            return il2cpp::create_object<app::DataProvider_c_DisplayClass14_0>(get_class());
        }
    } // namespace DataProvider_c_DisplayClass14_0
} // namespace app::classes::types
