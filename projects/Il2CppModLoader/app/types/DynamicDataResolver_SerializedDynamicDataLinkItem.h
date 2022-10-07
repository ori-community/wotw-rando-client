#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicDataResolver_SerializedDynamicDataLinkItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicDataResolver_SerializedDynamicDataLinkItem__Class** type_info;
        inline app::DynamicDataResolver_SerializedDynamicDataLinkItem__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataResolver_SerializedDynamicDataLinkItem__Class>(type_info, "Moon", "DynamicDataResolver", "SerializedDynamicDataLinkItem");
        }
        inline app::DynamicDataResolver_SerializedDynamicDataLinkItem* create() {
            return il2cpp::create_object<app::DynamicDataResolver_SerializedDynamicDataLinkItem>(get_class());
        }
        inline app::DynamicDataResolver_SerializedDynamicDataLinkItem__Boxed* box(app::DynamicDataResolver_SerializedDynamicDataLinkItem value) {
            return il2cpp::box_value<app::DynamicDataResolver_SerializedDynamicDataLinkItem__Boxed>(get_class(), value);
        }
        inline app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array* create_array(int size) {
            return il2cpp::array_new<app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array>(get_class(), size);
        }
        inline app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array* create_array(const std::vector<app::DynamicDataResolver_SerializedDynamicDataLinkItem>& items) {
            return il2cpp::array_new<app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array>(get_class(), items);
        }
    } // namespace DynamicDataResolver_SerializedDynamicDataLinkItem
} // namespace app::classes::types
