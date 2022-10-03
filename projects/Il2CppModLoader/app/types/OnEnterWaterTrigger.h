#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnEnterWaterTrigger {
        namespace {
            app::OnEnterWaterTrigger__Class* type_info_ref = nullptr;
        }
        app::OnEnterWaterTrigger__Class** type_info = &type_info_ref;
        inline app::OnEnterWaterTrigger__Class* get_class() {
            return il2cpp::get_class<app::OnEnterWaterTrigger__Class>(type_info, "", "OnEnterWaterTrigger");
        }
        inline app::OnEnterWaterTrigger* create() {
            return il2cpp::create_object<app::OnEnterWaterTrigger>(get_class());
        }
    } // namespace OnEnterWaterTrigger
} // namespace app::classes::types
