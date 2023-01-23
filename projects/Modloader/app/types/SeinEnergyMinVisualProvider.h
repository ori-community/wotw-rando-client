#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinEnergyMinVisualProvider__Class.h>
#include <Modloader/app/structs/SeinEnergyMinVisualProvider.h>

namespace app::classes::types {
    namespace SeinEnergyMinVisualProvider {
        namespace {
            inline app::SeinEnergyMinVisualProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnergyMinVisualProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyMinVisualProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMinVisualProvider__Class>(type_info, "", "SeinEnergyMinVisualProvider");
        }
        inline app::SeinEnergyMinVisualProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMinVisualProvider>(get_class());
        }
    } // namespace SeinEnergyMinVisualProvider
} // namespace app::classes::types
