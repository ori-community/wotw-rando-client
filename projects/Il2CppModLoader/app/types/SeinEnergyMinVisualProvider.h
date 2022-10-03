#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyMinVisualProvider {
        namespace {
            app::SeinEnergyMinVisualProvider__Class* type_info_ref = nullptr;
        }
        app::SeinEnergyMinVisualProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyMinVisualProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMinVisualProvider__Class>(type_info, "", "SeinEnergyMinVisualProvider");
        }
        inline app::SeinEnergyMinVisualProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMinVisualProvider>(get_class());
        }
    } // namespace SeinEnergyMinVisualProvider
} // namespace app::classes::types
