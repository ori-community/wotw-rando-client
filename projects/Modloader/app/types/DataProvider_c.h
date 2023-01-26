#pragma once
#include <Modloader/app/structs/DataProvider_c.h>
#include <Modloader/app/structs/DataProvider_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataProvider_c {
        inline app::DataProvider_c__Class** type_info() {
            static app::DataProvider_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataProvider_c__Class**)(modloader::win::memory::resolve_rva(0x04710100));
            }
            return cache;
        }
        inline app::DataProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DataProvider_c__Class>(type_info(), "SystemIntegration.Synchronizer", "DataProvider", "<>c");
        }
        inline app::DataProvider_c* create() {
            return il2cpp::create_object<app::DataProvider_c>(get_class());
        }
    } // namespace DataProvider_c
} // namespace app::classes::types
