#pragma once
#include <Modloader/app/structs/SeinEnergyMaxVisualProvider.h>
#include <Modloader/app/structs/SeinEnergyMaxVisualProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyMaxVisualProvider {
        inline app::SeinEnergyMaxVisualProvider__Class** type_info() {
            static app::SeinEnergyMaxVisualProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnergyMaxVisualProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnergyMaxVisualProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMaxVisualProvider__Class>(type_info(), "", "SeinEnergyMaxVisualProvider");
        }
        inline app::SeinEnergyMaxVisualProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMaxVisualProvider>(get_class());
        }
    } // namespace SeinEnergyMaxVisualProvider
} // namespace app::classes::types
