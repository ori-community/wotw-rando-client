#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Hashtable_bucket {
        namespace {
            app::Hashtable_bucket__Class* type_info_ref = nullptr;
        }
        app::Hashtable_bucket__Class** type_info = &type_info_ref;
        inline app::Hashtable_bucket__Class* get_class() {
            return il2cpp::get_nested_class<app::Hashtable_bucket__Class>(type_info, "System.Collections", "Hashtable", "bucket");
        }
        inline app::Hashtable_bucket* create() {
            return il2cpp::create_object<app::Hashtable_bucket>(get_class());
        }
        inline app::Hashtable_bucket__Boxed* box(app::Hashtable_bucket value) {
            return il2cpp::box_value<app::Hashtable_bucket__Boxed>(get_class(), value);
        }
        inline app::Hashtable_bucket__Array* create_array(int size) {
            return il2cpp::array_new<app::Hashtable_bucket__Array>(get_class(), size);
        }
        inline app::Hashtable_bucket__Array* create_array(const std::vector<app::Hashtable_bucket__Boxed>& items) {
            return il2cpp::array_new<app::Hashtable_bucket__Array>(get_class(), items);
        }
    } // namespace Hashtable_bucket
} // namespace app::classes::types
