#pragma once
#include <Modloader/app/structs/DataProviderTest3.h>
#include <Modloader/app/structs/DataProviderTest3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataProviderTest3 {
        inline app::DataProviderTest3__Class** type_info() {
            static app::DataProviderTest3__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataProviderTest3__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataProviderTest3__Class* get_class() {
            return il2cpp::get_class<app::DataProviderTest3__Class>(type_info(), "", "DataProviderTest3");
        }
        inline app::DataProviderTest3* create() {
            return il2cpp::create_object<app::DataProviderTest3>(get_class());
        }
    } // namespace DataProviderTest3
} // namespace app::classes::types
