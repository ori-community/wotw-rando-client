#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicTextProvider_MessageConditionPair {
        namespace {
            inline app::DynamicTextProvider_MessageConditionPair__Class* type_info_ref = nullptr;
        }
        inline app::DynamicTextProvider_MessageConditionPair__Class** type_info = &type_info_ref;
        inline app::DynamicTextProvider_MessageConditionPair__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicTextProvider_MessageConditionPair__Class>(type_info, "", "DynamicTextProvider", "MessageConditionPair");
        }
        inline app::DynamicTextProvider_MessageConditionPair* create() {
            return il2cpp::create_object<app::DynamicTextProvider_MessageConditionPair>(get_class());
        }
        inline app::DynamicTextProvider_MessageConditionPair__Boxed* box(app::DynamicTextProvider_MessageConditionPair value) {
            return il2cpp::box_value<app::DynamicTextProvider_MessageConditionPair__Boxed>(get_class(), value);
        }
        inline app::DynamicTextProvider_MessageConditionPair__Array* create_array(int size) {
            return il2cpp::array_new<app::DynamicTextProvider_MessageConditionPair__Array>(get_class(), size);
        }
        inline app::DynamicTextProvider_MessageConditionPair__Array* create_array(const std::vector<app::DynamicTextProvider_MessageConditionPair>& items) {
            return il2cpp::array_new<app::DynamicTextProvider_MessageConditionPair__Array>(get_class(), items);
        }
    } // namespace DynamicTextProvider_MessageConditionPair
} // namespace app::classes::types
