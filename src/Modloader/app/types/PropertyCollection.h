#pragma once
#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/PropertyCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyCollection {
        inline app::PropertyCollection__Class** type_info() {
            static app::PropertyCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyCollection__Class**)(modloader::win::memory::resolve_rva(0x0473F370));
            }
            return cache;
        }
        inline app::PropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::PropertyCollection__Class>(type_info(), "System.Data", "PropertyCollection");
        }
        inline app::PropertyCollection* create() {
            return il2cpp::create_object<app::PropertyCollection>(get_class());
        }
    } // namespace PropertyCollection
} // namespace app::classes::types
