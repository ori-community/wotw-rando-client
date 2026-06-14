#pragma once
#include <Modloader/app/structs/CanSkipCreditsCondition.h>
#include <Modloader/app/structs/CanSkipCreditsCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanSkipCreditsCondition {
        inline app::CanSkipCreditsCondition__Class** type_info() {
            static app::CanSkipCreditsCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanSkipCreditsCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanSkipCreditsCondition__Class* get_class() {
            return il2cpp::get_class<app::CanSkipCreditsCondition__Class>(type_info(), "", "CanSkipCreditsCondition");
        }
        inline app::CanSkipCreditsCondition* create() {
            return il2cpp::create_object<app::CanSkipCreditsCondition>(get_class());
        }
    } // namespace CanSkipCreditsCondition
} // namespace app::classes::types
