#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicDataResolver_SerializedDynamicDataLinkItem__Array {
        namespace {
            app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class* type_info_ref = nullptr;
        }
        app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class** type_info = &type_info_ref;
        inline app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class>(type_info, "Moon", "DynamicDataResolver+SerializedDynamicDataLinkItem[]");
        }
        inline app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array* create() {
            return il2cpp::create_object<app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array>(get_class());
        }
    } // namespace DynamicDataResolver_SerializedDynamicDataLinkItem__Array
} // namespace app::classes::types
