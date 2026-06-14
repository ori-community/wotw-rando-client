#pragma once
#include <Modloader/app/structs/OnEnterWaterTrigger.h>
#include <Modloader/app/structs/OnEnterWaterTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnEnterWaterTrigger {
        inline app::OnEnterWaterTrigger__Class** type_info() {
            static app::OnEnterWaterTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnEnterWaterTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnEnterWaterTrigger__Class* get_class() {
            return il2cpp::get_class<app::OnEnterWaterTrigger__Class>(type_info(), "", "OnEnterWaterTrigger");
        }
        inline app::OnEnterWaterTrigger* create() {
            return il2cpp::create_object<app::OnEnterWaterTrigger>(get_class());
        }
    } // namespace OnEnterWaterTrigger
} // namespace app::classes::types
