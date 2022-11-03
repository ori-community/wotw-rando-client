#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AreaMapLegend {
        namespace {
            inline app::AreaMapLegend__Class* type_info_ref = nullptr;
        }
        inline app::AreaMapLegend__Class** type_info = &type_info_ref;
        inline app::AreaMapLegend__Class* get_class() {
            return il2cpp::get_class<app::AreaMapLegend__Class>(type_info, "", "AreaMapLegend");
        }
        inline app::AreaMapLegend* create() {
            return il2cpp::create_object<app::AreaMapLegend>(get_class());
        }
    } // namespace AreaMapLegend
} // namespace app::classes::types
