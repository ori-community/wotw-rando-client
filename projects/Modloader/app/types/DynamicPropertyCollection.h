#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicPropertyCollection {
        inline app::DynamicPropertyCollection__Class** type_info = (app::DynamicPropertyCollection__Class**)(modloader::win::memory::resolve_rva(0x04766B28));
        inline app::DynamicPropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::DynamicPropertyCollection__Class>(type_info, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection");
        }
        inline app::DynamicPropertyCollection* create() {
            return il2cpp::create_object<app::DynamicPropertyCollection>(get_class());
        }
    } // namespace DynamicPropertyCollection
} // namespace app::classes::types
