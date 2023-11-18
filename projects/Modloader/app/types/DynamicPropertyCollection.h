#pragma once
#include <Modloader/app/structs/DynamicPropertyCollection.h>
#include <Modloader/app/structs/DynamicPropertyCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicPropertyCollection {
        inline app::DynamicPropertyCollection__Class** type_info() {
            static app::DynamicPropertyCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicPropertyCollection__Class**)(modloader::win::memory::resolve_rva(0x04766B28));
            }
            return cache;
        }
        inline app::DynamicPropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::DynamicPropertyCollection__Class>(type_info(), "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection");
        }
        inline app::DynamicPropertyCollection* create() {
            return il2cpp::create_object<app::DynamicPropertyCollection>(get_class());
        }
    } // namespace DynamicPropertyCollection
} // namespace app::classes::types
