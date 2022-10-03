#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyCurrentNormalizedProvider {
        namespace {
            app::SeinEnergyCurrentNormalizedProvider__Class* type_info_ref = nullptr;
        }
        app::SeinEnergyCurrentNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyCurrentNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyCurrentNormalizedProvider__Class>(type_info, "", "SeinEnergyCurrentNormalizedProvider");
        }
        inline app::SeinEnergyCurrentNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinEnergyCurrentNormalizedProvider>(get_class());
        }
    } // namespace SeinEnergyCurrentNormalizedProvider
} // namespace app::classes::types
