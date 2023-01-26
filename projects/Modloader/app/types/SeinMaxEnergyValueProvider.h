#pragma once
#include <Modloader/app/structs/SeinMaxEnergyValueProvider.h>
#include <Modloader/app/structs/SeinMaxEnergyValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMaxEnergyValueProvider {
        inline app::SeinMaxEnergyValueProvider__Class** type_info() {
            static app::SeinMaxEnergyValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMaxEnergyValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMaxEnergyValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxEnergyValueProvider__Class>(type_info(), "", "SeinMaxEnergyValueProvider");
        }
        inline app::SeinMaxEnergyValueProvider* create() {
            return il2cpp::create_object<app::SeinMaxEnergyValueProvider>(get_class());
        }
    } // namespace SeinMaxEnergyValueProvider
} // namespace app::classes::types
