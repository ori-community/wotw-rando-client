#pragma once
#include <Modloader/app/structs/InternalCodePageDataItem.h>
#include <Modloader/app/structs/InternalCodePageDataItem__Array.h>
#include <Modloader/app/structs/InternalCodePageDataItem__Boxed.h>
#include <Modloader/app/structs/InternalCodePageDataItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalCodePageDataItem {
        inline app::InternalCodePageDataItem__Class** type_info() {
            static app::InternalCodePageDataItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InternalCodePageDataItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InternalCodePageDataItem__Class* get_class() {
            return il2cpp::get_class<app::InternalCodePageDataItem__Class>(type_info(), "System.Globalization", "InternalCodePageDataItem");
        }
        inline app::InternalCodePageDataItem* create() {
            return il2cpp::create_object<app::InternalCodePageDataItem>(get_class());
        }
        inline app::InternalCodePageDataItem__Boxed* box(app::InternalCodePageDataItem value) {
            return il2cpp::box_value<app::InternalCodePageDataItem__Boxed>(get_class(), value);
        }
        inline app::InternalCodePageDataItem__Array* create_array(int size) {
            return il2cpp::array_new<app::InternalCodePageDataItem__Array>(get_class(), size);
        }
        inline app::InternalCodePageDataItem__Array* create_array(const std::vector<app::InternalCodePageDataItem>& items) {
            return il2cpp::array_new<app::InternalCodePageDataItem__Array>(get_class(), items);
        }
    } // namespace InternalCodePageDataItem
} // namespace app::classes::types
