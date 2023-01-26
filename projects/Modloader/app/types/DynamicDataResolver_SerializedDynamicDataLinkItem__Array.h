#pragma once
#include <Modloader/app/structs/DynamicDataResolver_SerializedDynamicDataLinkItem__Array.h>
#include <Modloader/app/structs/DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicDataResolver_SerializedDynamicDataLinkItem__Array {
        inline app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class** type_info() {
            static app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array__Class>(type_info(), "Moon", "DynamicDataResolver+SerializedDynamicDataLinkItem[]");
        }
        inline app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array* create() {
            return il2cpp::create_object<app::DynamicDataResolver_SerializedDynamicDataLinkItem__Array>(get_class());
        }
    } // namespace DynamicDataResolver_SerializedDynamicDataLinkItem__Array
} // namespace app::classes::types
