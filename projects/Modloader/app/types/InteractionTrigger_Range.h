#pragma once
#include <Modloader/app/structs/InteractionTrigger_Range.h>
#include <Modloader/app/structs/InteractionTrigger_Range__Array.h>
#include <Modloader/app/structs/InteractionTrigger_Range__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionTrigger_Range {
        inline app::InteractionTrigger_Range__Class** type_info() {
            static app::InteractionTrigger_Range__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionTrigger_Range__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionTrigger_Range__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionTrigger_Range__Class>(type_info(), "RootMotion.FinalIK", "InteractionTrigger", "Range");
        }
        inline app::InteractionTrigger_Range* create() {
            return il2cpp::create_object<app::InteractionTrigger_Range>(get_class());
        }
        inline app::InteractionTrigger_Range__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionTrigger_Range__Array>(get_class(), size);
        }
        inline app::InteractionTrigger_Range__Array* create_array(const std::vector<app::InteractionTrigger_Range*>& items) {
            return il2cpp::array_new<app::InteractionTrigger_Range__Array>(get_class(), items);
        }
    } // namespace InteractionTrigger_Range
} // namespace app::classes::types
