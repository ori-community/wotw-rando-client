#pragma once
#include <Modloader/app/structs/HoldingNightberryCondition.h>
#include <Modloader/app/structs/HoldingNightberryCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HoldingNightberryCondition {
        inline app::HoldingNightberryCondition__Class** type_info() {
            static app::HoldingNightberryCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HoldingNightberryCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HoldingNightberryCondition__Class* get_class() {
            return il2cpp::get_class<app::HoldingNightberryCondition__Class>(type_info(), "", "HoldingNightberryCondition");
        }
        inline app::HoldingNightberryCondition* create() {
            return il2cpp::create_object<app::HoldingNightberryCondition>(get_class());
        }
    } // namespace HoldingNightberryCondition
} // namespace app::classes::types
