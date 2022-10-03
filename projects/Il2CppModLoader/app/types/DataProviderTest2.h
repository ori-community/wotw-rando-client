#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataProviderTest2 {
        namespace {
            app::DataProviderTest2__Class* type_info_ref = nullptr;
        }
        app::DataProviderTest2__Class** type_info = &type_info_ref;
        inline app::DataProviderTest2__Class* get_class() {
            return il2cpp::get_class<app::DataProviderTest2__Class>(type_info, "", "DataProviderTest2");
        }
        inline app::DataProviderTest2* create() {
            return il2cpp::create_object<app::DataProviderTest2>(get_class());
        }
    } // namespace DataProviderTest2
} // namespace app::classes::types
