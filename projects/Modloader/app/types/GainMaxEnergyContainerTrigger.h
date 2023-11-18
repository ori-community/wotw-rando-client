#pragma once
#include <Modloader/app/structs/GainMaxEnergyContainerTrigger.h>
#include <Modloader/app/structs/GainMaxEnergyContainerTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GainMaxEnergyContainerTrigger {
        inline app::GainMaxEnergyContainerTrigger__Class** type_info() {
            static app::GainMaxEnergyContainerTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GainMaxEnergyContainerTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GainMaxEnergyContainerTrigger__Class* get_class() {
            return il2cpp::get_class<app::GainMaxEnergyContainerTrigger__Class>(type_info(), "", "GainMaxEnergyContainerTrigger");
        }
        inline app::GainMaxEnergyContainerTrigger* create() {
            return il2cpp::create_object<app::GainMaxEnergyContainerTrigger>(get_class());
        }
    } // namespace GainMaxEnergyContainerTrigger
} // namespace app::classes::types
