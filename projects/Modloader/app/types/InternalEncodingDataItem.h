#pragma once
#include <Modloader/app/structs/InternalEncodingDataItem.h>
#include <Modloader/app/structs/InternalEncodingDataItem__Array.h>
#include <Modloader/app/structs/InternalEncodingDataItem__Boxed.h>
#include <Modloader/app/structs/InternalEncodingDataItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalEncodingDataItem {
        inline app::InternalEncodingDataItem__Class** type_info() {
            static app::InternalEncodingDataItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InternalEncodingDataItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InternalEncodingDataItem__Class* get_class() {
            return il2cpp::get_class<app::InternalEncodingDataItem__Class>(type_info(), "System.Globalization", "InternalEncodingDataItem");
        }
        inline app::InternalEncodingDataItem* create() {
            return il2cpp::create_object<app::InternalEncodingDataItem>(get_class());
        }
        inline app::InternalEncodingDataItem__Boxed* box(app::InternalEncodingDataItem value) {
            return il2cpp::box_value<app::InternalEncodingDataItem__Boxed>(get_class(), value);
        }
        inline app::InternalEncodingDataItem__Array* create_array(int size) {
            return il2cpp::array_new<app::InternalEncodingDataItem__Array>(get_class(), size);
        }
        inline app::InternalEncodingDataItem__Array* create_array(const std::vector<app::InternalEncodingDataItem>& items) {
            return il2cpp::array_new<app::InternalEncodingDataItem__Array>(get_class(), items);
        }
    } // namespace InternalEncodingDataItem
} // namespace app::classes::types
