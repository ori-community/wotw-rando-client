#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GainMaxEnergyContainerTrigger {
        namespace {
            inline app::GainMaxEnergyContainerTrigger__Class* type_info_ref = nullptr;
        }
        inline app::GainMaxEnergyContainerTrigger__Class** type_info = &type_info_ref;
        inline app::GainMaxEnergyContainerTrigger__Class* get_class() {
            return il2cpp::get_class<app::GainMaxEnergyContainerTrigger__Class>(type_info, "", "GainMaxEnergyContainerTrigger");
        }
        inline app::GainMaxEnergyContainerTrigger* create() {
            return il2cpp::create_object<app::GainMaxEnergyContainerTrigger>(get_class());
        }
    } // namespace GainMaxEnergyContainerTrigger
} // namespace app::classes::types
