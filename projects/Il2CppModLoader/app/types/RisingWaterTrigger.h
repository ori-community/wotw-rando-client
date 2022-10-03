#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RisingWaterTrigger {
        namespace {
            app::RisingWaterTrigger__Class* type_info_ref = nullptr;
        }
        app::RisingWaterTrigger__Class** type_info = &type_info_ref;
        inline app::RisingWaterTrigger__Class* get_class() {
            return il2cpp::get_class<app::RisingWaterTrigger__Class>(type_info, "", "RisingWaterTrigger");
        }
        inline app::RisingWaterTrigger* create() {
            return il2cpp::create_object<app::RisingWaterTrigger>(get_class());
        }
    } // namespace RisingWaterTrigger
} // namespace app::classes::types
