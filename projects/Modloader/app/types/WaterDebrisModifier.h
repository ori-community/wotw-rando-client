#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterDebrisModifier__Class.h>
#include <Modloader/app/structs/WaterDebrisModifier.h>

namespace app::classes::types {
    namespace WaterDebrisModifier {
        namespace {
            inline app::WaterDebrisModifier__Class* type_info_ref = nullptr;
        }
        inline app::WaterDebrisModifier__Class** type_info = &type_info_ref;
        inline app::WaterDebrisModifier__Class* get_class() {
            return il2cpp::get_class<app::WaterDebrisModifier__Class>(type_info, "", "WaterDebrisModifier");
        }
        inline app::WaterDebrisModifier* create() {
            return il2cpp::create_object<app::WaterDebrisModifier>(get_class());
        }
    } // namespace WaterDebrisModifier
} // namespace app::classes::types
