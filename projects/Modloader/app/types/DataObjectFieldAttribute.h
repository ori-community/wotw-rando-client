#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataObjectFieldAttribute {
        inline app::DataObjectFieldAttribute__Class** type_info = (app::DataObjectFieldAttribute__Class**)(modloader::win::memory::resolve_rva(0x04793D88));
        inline app::DataObjectFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::DataObjectFieldAttribute__Class>(type_info, "System.ComponentModel", "DataObjectFieldAttribute");
        }
        inline app::DataObjectFieldAttribute* create() {
            return il2cpp::create_object<app::DataObjectFieldAttribute>(get_class());
        }
    } // namespace DataObjectFieldAttribute
} // namespace app::classes::types
