#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CarryablePickedUpTrigger {
        namespace {
            app::CarryablePickedUpTrigger__Class* type_info_ref = nullptr;
        }
        app::CarryablePickedUpTrigger__Class** type_info = &type_info_ref;
        inline app::CarryablePickedUpTrigger__Class* get_class() {
            return il2cpp::get_class<app::CarryablePickedUpTrigger__Class>(type_info, "", "CarryablePickedUpTrigger");
        }
        inline app::CarryablePickedUpTrigger* create() {
            return il2cpp::create_object<app::CarryablePickedUpTrigger>(get_class());
        }
    } // namespace CarryablePickedUpTrigger
} // namespace app::classes::types
