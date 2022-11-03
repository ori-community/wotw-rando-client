#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Hashtable_ValueCollection {
        inline app::Hashtable_ValueCollection__Class** type_info = (app::Hashtable_ValueCollection__Class**)(modloader::win::memory::resolve_rva(0x04714D20));
        inline app::Hashtable_ValueCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_ValueCollection__Class>(type_info, "System.Collections", "Hashtable", "ValueCollection");
        }
        inline app::Hashtable_ValueCollection* create() {
            return il2cpp::create_object<app::Hashtable_ValueCollection>(get_class());
        }
    } // namespace Hashtable_ValueCollection
} // namespace app::classes::types
