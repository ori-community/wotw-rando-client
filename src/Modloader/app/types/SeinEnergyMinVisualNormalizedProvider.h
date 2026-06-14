#pragma once
#include <Modloader/app/structs/SeinEnergyMinVisualNormalizedProvider.h>
#include <Modloader/app/structs/SeinEnergyMinVisualNormalizedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyMinVisualNormalizedProvider {
        inline app::SeinEnergyMinVisualNormalizedProvider__Class** type_info() {
            static app::SeinEnergyMinVisualNormalizedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnergyMinVisualNormalizedProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnergyMinVisualNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMinVisualNormalizedProvider__Class>(type_info(), "", "SeinEnergyMinVisualNormalizedProvider");
        }
        inline app::SeinEnergyMinVisualNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMinVisualNormalizedProvider>(get_class());
        }
    } // namespace SeinEnergyMinVisualNormalizedProvider
} // namespace app::classes::types
