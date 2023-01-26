#pragma once
#include <Modloader/app/structs/ProximityMine.h>
#include <Modloader/app/structs/ProximityMine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProximityMine {
        inline app::ProximityMine__Class** type_info() {
            static app::ProximityMine__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProximityMine__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProximityMine__Class* get_class() {
            return il2cpp::get_class<app::ProximityMine__Class>(type_info(), "", "ProximityMine");
        }
        inline app::ProximityMine* create() {
            return il2cpp::create_object<app::ProximityMine>(get_class());
        }
    } // namespace ProximityMine
} // namespace app::classes::types
