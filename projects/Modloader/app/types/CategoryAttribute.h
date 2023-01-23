#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CategoryAttribute__Class.h>
#include <Modloader/app/structs/CategoryAttribute.h>

namespace app::classes::types {
    namespace CategoryAttribute {
        inline app::CategoryAttribute__Class** type_info = (app::CategoryAttribute__Class**)(modloader::win::memory::resolve_rva(0x0470DD60));
        inline app::CategoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::CategoryAttribute__Class>(type_info, "System.ComponentModel", "CategoryAttribute");
        }
        inline app::CategoryAttribute* create() {
            return il2cpp::create_object<app::CategoryAttribute>(get_class());
        }
    } // namespace CategoryAttribute
} // namespace app::classes::types
