#pragma once
#include <Modloader/app/structs/SeinEnergyMaxVisualNormalizedProvider.h>
#include <Modloader/app/structs/SeinEnergyMaxVisualNormalizedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyMaxVisualNormalizedProvider {
        inline app::SeinEnergyMaxVisualNormalizedProvider__Class** type_info() {
            static app::SeinEnergyMaxVisualNormalizedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnergyMaxVisualNormalizedProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnergyMaxVisualNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMaxVisualNormalizedProvider__Class>(type_info(), "", "SeinEnergyMaxVisualNormalizedProvider");
        }
        inline app::SeinEnergyMaxVisualNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMaxVisualNormalizedProvider>(get_class());
        }
    } // namespace SeinEnergyMaxVisualNormalizedProvider
} // namespace app::classes::types
