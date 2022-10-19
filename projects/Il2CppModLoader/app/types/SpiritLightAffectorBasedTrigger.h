#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritLightAffectorBasedTrigger {
        namespace {
            inline app::SpiritLightAffectorBasedTrigger__Class* type_info_ref = nullptr;
        }
        inline app::SpiritLightAffectorBasedTrigger__Class** type_info = &type_info_ref;
        inline app::SpiritLightAffectorBasedTrigger__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightAffectorBasedTrigger__Class>(type_info, "", "SpiritLightAffectorBasedTrigger");
        }
        inline app::SpiritLightAffectorBasedTrigger* create() {
            return il2cpp::create_object<app::SpiritLightAffectorBasedTrigger>(get_class());
        }
    } // namespace SpiritLightAffectorBasedTrigger
} // namespace app::classes::types
