#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataKey {
        inline app::DataKey__Class** type_info = (app::DataKey__Class**)(modloader::win::memory::resolve_rva(0x0477B878));
        inline app::DataKey__Class* get_class() {
            return il2cpp::get_class<app::DataKey__Class>(type_info, "System.Data", "DataKey");
        }
        inline app::DataKey* create() {
            return il2cpp::create_object<app::DataKey>(get_class());
        }
        inline app::DataKey__Boxed* box(app::DataKey value) {
            return il2cpp::box_value<app::DataKey__Boxed>(get_class(), value);
        }
    } // namespace DataKey
} // namespace app::classes::types
