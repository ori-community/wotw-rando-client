#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicTextProvider_MessageConditionPair__Array__Class.h>
#include <Modloader/app/structs/DynamicTextProvider_MessageConditionPair__Array.h>

namespace app::classes::types {
    namespace DynamicTextProvider_MessageConditionPair__Array {
        namespace {
            inline app::DynamicTextProvider_MessageConditionPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::DynamicTextProvider_MessageConditionPair__Array__Class** type_info = &type_info_ref;
        inline app::DynamicTextProvider_MessageConditionPair__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicTextProvider_MessageConditionPair__Array__Class>(type_info, "", "DynamicTextProvider+MessageConditionPair[]");
        }
        inline app::DynamicTextProvider_MessageConditionPair__Array* create() {
            return il2cpp::create_object<app::DynamicTextProvider_MessageConditionPair__Array>(get_class());
        }
    } // namespace DynamicTextProvider_MessageConditionPair__Array
} // namespace app::classes::types
