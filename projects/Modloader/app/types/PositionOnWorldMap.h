#pragma once
#include <Modloader/app/structs/PositionOnWorldMap.h>
#include <Modloader/app/structs/PositionOnWorldMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionOnWorldMap {
        inline app::PositionOnWorldMap__Class** type_info() {
            static app::PositionOnWorldMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionOnWorldMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionOnWorldMap__Class* get_class() {
            return il2cpp::get_class<app::PositionOnWorldMap__Class>(type_info(), "", "PositionOnWorldMap");
        }
        inline app::PositionOnWorldMap* create() {
            return il2cpp::create_object<app::PositionOnWorldMap>(get_class());
        }
    } // namespace PositionOnWorldMap
} // namespace app::classes::types
