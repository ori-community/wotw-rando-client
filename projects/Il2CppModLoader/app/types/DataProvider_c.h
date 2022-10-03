#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataProvider_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataProvider_c__Class** type_info;
        inline app::DataProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DataProvider_c__Class>(type_info, "SystemIntegration.Synchronizer", "DataProvider", "<>c");
        }
        inline app::DataProvider_c* create() {
            return il2cpp::create_object<app::DataProvider_c>(get_class());
        }
    } // namespace DataProvider_c
} // namespace app::classes::types
