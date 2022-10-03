#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalCodePageDataItem {
        namespace {
            app::InternalCodePageDataItem__Class* type_info_ref = nullptr;
        }
        app::InternalCodePageDataItem__Class** type_info = &type_info_ref;
        inline app::InternalCodePageDataItem__Class* get_class() {
            return il2cpp::get_class<app::InternalCodePageDataItem__Class>(type_info, "System.Globalization", "InternalCodePageDataItem");
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
    } // namespace InternalCodePageDataItem
} // namespace app::classes::types
