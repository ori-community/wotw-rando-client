#pragma once
#include <Modloader/app/structs/DataProvider_c_DisplayClass13_0.h>
#include <Modloader/app/structs/DataProvider_c_DisplayClass13_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataProvider_c_DisplayClass13_0 {
        inline app::DataProvider_c_DisplayClass13_0__Class** type_info() {
            static app::DataProvider_c_DisplayClass13_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataProvider_c_DisplayClass13_0__Class**)(modloader::win::memory::resolve_rva(0x0473DF08));
            }
            return cache;
        }
        inline app::DataProvider_c_DisplayClass13_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DataProvider_c_DisplayClass13_0__Class>(type_info(), "SystemIntegration.Synchronizer", "DataProvider", "<>c__DisplayClass13_0");
        }
        inline app::DataProvider_c_DisplayClass13_0* create() {
            return il2cpp::create_object<app::DataProvider_c_DisplayClass13_0>(get_class());
        }
    } // namespace DataProvider_c_DisplayClass13_0
} // namespace app::classes::types
