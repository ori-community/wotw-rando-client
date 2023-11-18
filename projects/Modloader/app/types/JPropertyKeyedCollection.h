#pragma once
#include <Modloader/app/structs/JPropertyKeyedCollection.h>
#include <Modloader/app/structs/JPropertyKeyedCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JPropertyKeyedCollection {
        inline app::JPropertyKeyedCollection__Class** type_info() {
            static app::JPropertyKeyedCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JPropertyKeyedCollection__Class**)(modloader::win::memory::resolve_rva(0x047886B0));
            }
            return cache;
        }
        inline app::JPropertyKeyedCollection__Class* get_class() {
            return il2cpp::get_class<app::JPropertyKeyedCollection__Class>(type_info(), "Newtonsoft.Json.Linq", "JPropertyKeyedCollection");
        }
        inline app::JPropertyKeyedCollection* create() {
            return il2cpp::create_object<app::JPropertyKeyedCollection>(get_class());
        }
    } // namespace JPropertyKeyedCollection
} // namespace app::classes::types
