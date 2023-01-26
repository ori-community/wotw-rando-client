#pragma once
#include <Modloader/app/structs/IsTriggerCollidingCondition_c.h>
#include <Modloader/app/structs/IsTriggerCollidingCondition_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsTriggerCollidingCondition_c {
        inline app::IsTriggerCollidingCondition_c__Class** type_info() {
            static app::IsTriggerCollidingCondition_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IsTriggerCollidingCondition_c__Class**)(modloader::win::memory::resolve_rva(0x0475C020));
            }
            return cache;
        }
        inline app::IsTriggerCollidingCondition_c__Class* get_class() {
            return il2cpp::get_nested_class<app::IsTriggerCollidingCondition_c__Class>(type_info(), "", "IsTriggerCollidingCondition", "<>c");
        }
        inline app::IsTriggerCollidingCondition_c* create() {
            return il2cpp::create_object<app::IsTriggerCollidingCondition_c>(get_class());
        }
    } // namespace IsTriggerCollidingCondition_c
} // namespace app::classes::types
