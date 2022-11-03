#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinMaxEnergyValueProvider {
        namespace {
            inline app::SeinMaxEnergyValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinMaxEnergyValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinMaxEnergyValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinMaxEnergyValueProvider__Class>(type_info, "", "SeinMaxEnergyValueProvider");
        }
        inline app::SeinMaxEnergyValueProvider* create() {
            return il2cpp::create_object<app::SeinMaxEnergyValueProvider>(get_class());
        }
    } // namespace SeinMaxEnergyValueProvider
} // namespace app::classes::types
