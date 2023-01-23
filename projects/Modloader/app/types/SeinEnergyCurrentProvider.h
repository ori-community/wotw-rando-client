#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinEnergyCurrentProvider__Class.h>
#include <Modloader/app/structs/SeinEnergyCurrentProvider.h>

namespace app::classes::types {
    namespace SeinEnergyCurrentProvider {
        namespace {
            inline app::SeinEnergyCurrentProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnergyCurrentProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyCurrentProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyCurrentProvider__Class>(type_info, "", "SeinEnergyCurrentProvider");
        }
        inline app::SeinEnergyCurrentProvider* create() {
            return il2cpp::create_object<app::SeinEnergyCurrentProvider>(get_class());
        }
    } // namespace SeinEnergyCurrentProvider
} // namespace app::classes::types
