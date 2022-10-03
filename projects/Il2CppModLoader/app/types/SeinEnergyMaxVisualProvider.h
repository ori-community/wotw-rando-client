#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyMaxVisualProvider {
        namespace {
            app::SeinEnergyMaxVisualProvider__Class* type_info_ref = nullptr;
        }
        app::SeinEnergyMaxVisualProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyMaxVisualProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMaxVisualProvider__Class>(type_info, "", "SeinEnergyMaxVisualProvider");
        }
        inline app::SeinEnergyMaxVisualProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMaxVisualProvider>(get_class());
        }
    } // namespace SeinEnergyMaxVisualProvider
} // namespace app::classes::types
