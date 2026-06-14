#pragma once
#include <Modloader/app/structs/MapStoneActivatedCondition.h>
#include <Modloader/app/structs/MapStoneActivatedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapStoneActivatedCondition {
        inline app::MapStoneActivatedCondition__Class** type_info() {
            static app::MapStoneActivatedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapStoneActivatedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapStoneActivatedCondition__Class* get_class() {
            return il2cpp::get_class<app::MapStoneActivatedCondition__Class>(type_info(), "", "MapStoneActivatedCondition");
        }
        inline app::MapStoneActivatedCondition* create() {
            return il2cpp::create_object<app::MapStoneActivatedCondition>(get_class());
        }
    } // namespace MapStoneActivatedCondition
} // namespace app::classes::types
