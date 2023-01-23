#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinEnergyMaxVisualNormalizedProvider__Class.h>
#include <Modloader/app/structs/SeinEnergyMaxVisualNormalizedProvider.h>

namespace app::classes::types {
    namespace SeinEnergyMaxVisualNormalizedProvider {
        namespace {
            inline app::SeinEnergyMaxVisualNormalizedProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnergyMaxVisualNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyMaxVisualNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMaxVisualNormalizedProvider__Class>(type_info, "", "SeinEnergyMaxVisualNormalizedProvider");
        }
        inline app::SeinEnergyMaxVisualNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMaxVisualNormalizedProvider>(get_class());
        }
    } // namespace SeinEnergyMaxVisualNormalizedProvider
} // namespace app::classes::types
