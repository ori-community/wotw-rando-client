#pragma once
#include <Modloader/app/structs/SeinEnergyMinVisualProvider.h>
#include <Modloader/app/structs/SeinEnergyMinVisualProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyMinVisualProvider {
        inline app::SeinEnergyMinVisualProvider__Class** type_info() {
            static app::SeinEnergyMinVisualProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnergyMinVisualProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnergyMinVisualProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMinVisualProvider__Class>(type_info(), "", "SeinEnergyMinVisualProvider");
        }
        inline app::SeinEnergyMinVisualProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMinVisualProvider>(get_class());
        }
    } // namespace SeinEnergyMinVisualProvider
} // namespace app::classes::types
