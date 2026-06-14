#pragma once
#include <Modloader/app/structs/SeinMaxEnergyNormalizedValueProvider.h>
#include <Modloader/app/structs/SeinMaxEnergyNormalizedValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMaxEnergyNormalizedValueProvider {
        inline app::SeinMaxEnergyNormalizedValueProvider__Class** type_info() {
            static app::SeinMaxEnergyNormalizedValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMaxEnergyNormalizedValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMaxEnergyNormalizedValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxEnergyNormalizedValueProvider__Class>(type_info(), "", "SeinMaxEnergyNormalizedValueProvider");
        }
        inline app::SeinMaxEnergyNormalizedValueProvider* create() {
            return il2cpp::create_object<app::SeinMaxEnergyNormalizedValueProvider>(get_class());
        }
    } // namespace SeinMaxEnergyNormalizedValueProvider
} // namespace app::classes::types
