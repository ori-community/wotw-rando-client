#pragma once
#include <Modloader/app/structs/DynamicTextProvider_MessageConditionPair__Array.h>
#include <Modloader/app/structs/DynamicTextProvider_MessageConditionPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicTextProvider_MessageConditionPair__Array {
        inline app::DynamicTextProvider_MessageConditionPair__Array__Class** type_info() {
            static app::DynamicTextProvider_MessageConditionPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicTextProvider_MessageConditionPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicTextProvider_MessageConditionPair__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicTextProvider_MessageConditionPair__Array__Class>(type_info(), "", "DynamicTextProvider+MessageConditionPair[]");
        }
        inline app::DynamicTextProvider_MessageConditionPair__Array* create() {
            return il2cpp::create_object<app::DynamicTextProvider_MessageConditionPair__Array>(get_class());
        }
    } // namespace DynamicTextProvider_MessageConditionPair__Array
} // namespace app::classes::types
