#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JPropertyKeyedCollection {
        inline app::JPropertyKeyedCollection__Class** type_info = (app::JPropertyKeyedCollection__Class**)(modloader::win::memory::resolve_rva(0x047886B0));
        inline app::JPropertyKeyedCollection__Class* get_class() {
            return il2cpp::get_class<app::JPropertyKeyedCollection__Class>(type_info, "Newtonsoft.Json.Linq", "JPropertyKeyedCollection");
        }
        inline app::JPropertyKeyedCollection* create() {
            return il2cpp::create_object<app::JPropertyKeyedCollection>(get_class());
        }
    } // namespace JPropertyKeyedCollection
} // namespace app::classes::types
