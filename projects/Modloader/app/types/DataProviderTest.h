#pragma once
#include <Modloader/app/structs/DataProviderTest.h>
#include <Modloader/app/structs/DataProviderTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataProviderTest {
        inline app::DataProviderTest__Class** type_info() {
            static app::DataProviderTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataProviderTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataProviderTest__Class* get_class() {
            return il2cpp::get_class<app::DataProviderTest__Class>(type_info(), "", "DataProviderTest");
        }
        inline app::DataProviderTest* create() {
            return il2cpp::create_object<app::DataProviderTest>(get_class());
        }
    } // namespace DataProviderTest
} // namespace app::classes::types
