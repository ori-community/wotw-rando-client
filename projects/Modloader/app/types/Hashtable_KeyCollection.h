#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Hashtable_KeyCollection__Class.h>
#include <Modloader/app/structs/Hashtable_KeyCollection.h>

namespace app::classes::types {
    namespace Hashtable_KeyCollection {
        inline app::Hashtable_KeyCollection__Class** type_info = (app::Hashtable_KeyCollection__Class**)(modloader::win::memory::resolve_rva(0x0477E928));
        inline app::Hashtable_KeyCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_KeyCollection__Class>(type_info, "System.Collections", "Hashtable", "KeyCollection");
        }
        inline app::Hashtable_KeyCollection* create() {
            return il2cpp::create_object<app::Hashtable_KeyCollection>(get_class());
        }
    } // namespace Hashtable_KeyCollection
} // namespace app::classes::types
