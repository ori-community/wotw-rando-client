#pragma once
#include <Modloader/app/structs/DataProviderTest2.h>
#include <Modloader/app/structs/DataProviderTest2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataProviderTest2 {
        inline app::DataProviderTest2__Class** type_info() {
            static app::DataProviderTest2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataProviderTest2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataProviderTest2__Class* get_class() {
            return il2cpp::get_class<app::DataProviderTest2__Class>(type_info(), "", "DataProviderTest2");
        }
        inline app::DataProviderTest2* create() {
            return il2cpp::create_object<app::DataProviderTest2>(get_class());
        }
    } // namespace DataProviderTest2
} // namespace app::classes::types
