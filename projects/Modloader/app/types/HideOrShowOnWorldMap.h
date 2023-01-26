#pragma once
#include <Modloader/app/structs/HideOrShowOnWorldMap.h>
#include <Modloader/app/structs/HideOrShowOnWorldMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HideOrShowOnWorldMap {
        inline app::HideOrShowOnWorldMap__Class** type_info() {
            static app::HideOrShowOnWorldMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HideOrShowOnWorldMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HideOrShowOnWorldMap__Class* get_class() {
            return il2cpp::get_class<app::HideOrShowOnWorldMap__Class>(type_info(), "", "HideOrShowOnWorldMap");
        }
        inline app::HideOrShowOnWorldMap* create() {
            return il2cpp::create_object<app::HideOrShowOnWorldMap>(get_class());
        }
    } // namespace HideOrShowOnWorldMap
} // namespace app::classes::types
