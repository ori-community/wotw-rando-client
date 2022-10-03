#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataProviderTest {
        namespace {
            app::DataProviderTest__Class* type_info_ref = nullptr;
        }
        app::DataProviderTest__Class** type_info = &type_info_ref;
        inline app::DataProviderTest__Class* get_class() {
            return il2cpp::get_class<app::DataProviderTest__Class>(type_info, "", "DataProviderTest");
        }
        inline app::DataProviderTest* create() {
            return il2cpp::create_object<app::DataProviderTest>(get_class());
        }
    } // namespace DataProviderTest
} // namespace app::classes::types
