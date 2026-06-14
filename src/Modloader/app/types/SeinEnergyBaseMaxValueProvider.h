#pragma once
#include <Modloader/app/structs/SeinEnergyBaseMaxValueProvider.h>
#include <Modloader/app/structs/SeinEnergyBaseMaxValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyBaseMaxValueProvider {
        inline app::SeinEnergyBaseMaxValueProvider__Class** type_info() {
            static app::SeinEnergyBaseMaxValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnergyBaseMaxValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnergyBaseMaxValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyBaseMaxValueProvider__Class>(type_info(), "", "SeinEnergyBaseMaxValueProvider");
        }
        inline app::SeinEnergyBaseMaxValueProvider* create() {
            return il2cpp::create_object<app::SeinEnergyBaseMaxValueProvider>(get_class());
        }
    } // namespace SeinEnergyBaseMaxValueProvider
} // namespace app::classes::types
