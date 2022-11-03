#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataProvider_c_DisplayClass14_0 {
        inline app::DataProvider_c_DisplayClass14_0__Class** type_info = (app::DataProvider_c_DisplayClass14_0__Class**)(modloader::win::memory::resolve_rva(0x0475AC98));
        inline app::DataProvider_c_DisplayClass14_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DataProvider_c_DisplayClass14_0__Class>(type_info, "SystemIntegration.Synchronizer", "DataProvider", "<>c__DisplayClass14_0");
        }
        inline app::DataProvider_c_DisplayClass14_0* create() {
            return il2cpp::create_object<app::DataProvider_c_DisplayClass14_0>(get_class());
        }
    } // namespace DataProvider_c_DisplayClass14_0
} // namespace app::classes::types
