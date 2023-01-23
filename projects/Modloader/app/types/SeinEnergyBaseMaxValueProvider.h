#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinEnergyBaseMaxValueProvider__Class.h>
#include <Modloader/app/structs/SeinEnergyBaseMaxValueProvider.h>

namespace app::classes::types {
    namespace SeinEnergyBaseMaxValueProvider {
        namespace {
            inline app::SeinEnergyBaseMaxValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnergyBaseMaxValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyBaseMaxValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyBaseMaxValueProvider__Class>(type_info, "", "SeinEnergyBaseMaxValueProvider");
        }
        inline app::SeinEnergyBaseMaxValueProvider* create() {
            return il2cpp::create_object<app::SeinEnergyBaseMaxValueProvider>(get_class());
        }
    } // namespace SeinEnergyBaseMaxValueProvider
} // namespace app::classes::types
