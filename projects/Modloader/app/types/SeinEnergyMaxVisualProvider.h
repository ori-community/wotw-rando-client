#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinEnergyMaxVisualProvider__Class.h>
#include <Modloader/app/structs/SeinEnergyMaxVisualProvider.h>

namespace app::classes::types {
    namespace SeinEnergyMaxVisualProvider {
        namespace {
            inline app::SeinEnergyMaxVisualProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnergyMaxVisualProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyMaxVisualProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMaxVisualProvider__Class>(type_info, "", "SeinEnergyMaxVisualProvider");
        }
        inline app::SeinEnergyMaxVisualProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMaxVisualProvider>(get_class());
        }
    } // namespace SeinEnergyMaxVisualProvider
} // namespace app::classes::types
