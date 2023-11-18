#pragma once
#include <Modloader/app/structs/SeinEnergyCurrentNormalizedProvider.h>
#include <Modloader/app/structs/SeinEnergyCurrentNormalizedProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyCurrentNormalizedProvider {
        inline app::SeinEnergyCurrentNormalizedProvider__Class** type_info() {
            static app::SeinEnergyCurrentNormalizedProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnergyCurrentNormalizedProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnergyCurrentNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyCurrentNormalizedProvider__Class>(type_info(), "", "SeinEnergyCurrentNormalizedProvider");
        }
        inline app::SeinEnergyCurrentNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinEnergyCurrentNormalizedProvider>(get_class());
        }
    } // namespace SeinEnergyCurrentNormalizedProvider
} // namespace app::classes::types
