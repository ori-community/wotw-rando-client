#pragma once
#include <Modloader/app/structs/AreaMapLegend.h>
#include <Modloader/app/structs/AreaMapLegend__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapLegend {
        inline app::AreaMapLegend__Class** type_info() {
            static app::AreaMapLegend__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapLegend__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapLegend__Class* get_class() {
            return il2cpp::get_class<app::AreaMapLegend__Class>(type_info(), "", "AreaMapLegend");
        }
        inline app::AreaMapLegend* create() {
            return il2cpp::create_object<app::AreaMapLegend>(get_class());
        }
    } // namespace AreaMapLegend
} // namespace app::classes::types
