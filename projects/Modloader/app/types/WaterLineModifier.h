#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterLineModifier {
        namespace {
            inline app::WaterLineModifier__Class* type_info_ref = nullptr;
        }
        inline app::WaterLineModifier__Class** type_info = &type_info_ref;
        inline app::WaterLineModifier__Class* get_class() {
            return il2cpp::get_class<app::WaterLineModifier__Class>(type_info, "", "WaterLineModifier");
        }
        inline app::WaterLineModifier* create() {
            return il2cpp::create_object<app::WaterLineModifier>(get_class());
        }
    } // namespace WaterLineModifier
} // namespace app::classes::types
