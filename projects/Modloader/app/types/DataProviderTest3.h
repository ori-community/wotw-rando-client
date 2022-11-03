#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataProviderTest3 {
        namespace {
            inline app::DataProviderTest3__Class* type_info_ref = nullptr;
        }
        inline app::DataProviderTest3__Class** type_info = &type_info_ref;
        inline app::DataProviderTest3__Class* get_class() {
            return il2cpp::get_class<app::DataProviderTest3__Class>(type_info, "", "DataProviderTest3");
        }
        inline app::DataProviderTest3* create() {
            return il2cpp::create_object<app::DataProviderTest3>(get_class());
        }
    } // namespace DataProviderTest3
} // namespace app::classes::types
