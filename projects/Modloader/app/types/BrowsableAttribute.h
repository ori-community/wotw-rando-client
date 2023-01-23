#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowsableAttribute__Class.h>
#include <Modloader/app/structs/BrowsableAttribute.h>

namespace app::classes::types {
    namespace BrowsableAttribute {
        inline app::BrowsableAttribute__Class** type_info = (app::BrowsableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04760290));
        inline app::BrowsableAttribute__Class* get_class() {
            return il2cpp::get_class<app::BrowsableAttribute__Class>(type_info, "System.ComponentModel", "BrowsableAttribute");
        }
        inline app::BrowsableAttribute* create() {
            return il2cpp::create_object<app::BrowsableAttribute>(get_class());
        }
    } // namespace BrowsableAttribute
} // namespace app::classes::types
