#pragma once
#include <Modloader/app/structs/SeinEnergyCurrentProvider.h>
#include <Modloader/app/structs/SeinEnergyCurrentProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyCurrentProvider {
        inline app::SeinEnergyCurrentProvider__Class** type_info() {
            static app::SeinEnergyCurrentProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnergyCurrentProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnergyCurrentProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyCurrentProvider__Class>(type_info(), "", "SeinEnergyCurrentProvider");
        }
        inline app::SeinEnergyCurrentProvider* create() {
            return il2cpp::create_object<app::SeinEnergyCurrentProvider>(get_class());
        }
    } // namespace SeinEnergyCurrentProvider
} // namespace app::classes::types
