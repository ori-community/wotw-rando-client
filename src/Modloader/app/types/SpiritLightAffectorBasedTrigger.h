#pragma once
#include <Modloader/app/structs/SpiritLightAffectorBasedTrigger.h>
#include <Modloader/app/structs/SpiritLightAffectorBasedTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightAffectorBasedTrigger {
        inline app::SpiritLightAffectorBasedTrigger__Class** type_info() {
            static app::SpiritLightAffectorBasedTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLightAffectorBasedTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLightAffectorBasedTrigger__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightAffectorBasedTrigger__Class>(type_info(), "", "SpiritLightAffectorBasedTrigger");
        }
        inline app::SpiritLightAffectorBasedTrigger* create() {
            return il2cpp::create_object<app::SpiritLightAffectorBasedTrigger>(get_class());
        }
    } // namespace SpiritLightAffectorBasedTrigger
} // namespace app::classes::types
