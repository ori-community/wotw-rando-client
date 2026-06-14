#pragma once
#include <Modloader/app/structs/DataRelationCollection.h>
#include <Modloader/app/structs/DataRelationCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRelationCollection {
        inline app::DataRelationCollection__Class** type_info() {
            static app::DataRelationCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataRelationCollection__Class**)(modloader::win::memory::resolve_rva(0x047257E8));
            }
            return cache;
        }
        inline app::DataRelationCollection__Class* get_class() {
            return il2cpp::get_class<app::DataRelationCollection__Class>(type_info(), "System.Data", "DataRelationCollection");
        }
        inline app::DataRelationCollection* create() {
            return il2cpp::create_object<app::DataRelationCollection>(get_class());
        }
    } // namespace DataRelationCollection
} // namespace app::classes::types
