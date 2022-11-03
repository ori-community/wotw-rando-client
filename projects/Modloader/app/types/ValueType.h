#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValueType {
        inline app::ValueType__Class** type_info = (app::ValueType__Class**)(modloader::win::memory::resolve_rva(0x04707CE8));
        inline app::ValueType__Class* get_class() {
            return il2cpp::get_class<app::ValueType__Class>(type_info, "System", "ValueType");
        }
        inline app::ValueType* create() {
            return il2cpp::create_object<app::ValueType>(get_class());
        }
    } // namespace ValueType
} // namespace app::classes::types
