#pragma once
#include <Modloader/app/structs/VisibleOnWorldMap.h>
#include <Modloader/app/structs/VisibleOnWorldMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VisibleOnWorldMap {
        inline app::VisibleOnWorldMap__Class** type_info() {
            static app::VisibleOnWorldMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VisibleOnWorldMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VisibleOnWorldMap__Class* get_class() {
            return il2cpp::get_class<app::VisibleOnWorldMap__Class>(type_info(), "", "VisibleOnWorldMap");
        }
        inline app::VisibleOnWorldMap* create() {
            return il2cpp::create_object<app::VisibleOnWorldMap>(get_class());
        }
    } // namespace VisibleOnWorldMap
} // namespace app::classes::types
