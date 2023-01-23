#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Hashtable_bucket__Class.h>
#include <Modloader/app/structs/Hashtable_bucket.h>
#include <Modloader/app/structs/Hashtable_bucket__Boxed.h>
#include <Modloader/app/structs/Hashtable_bucket__Array.h>

namespace app::classes::types {
    namespace Hashtable_bucket {
        namespace {
            inline app::Hashtable_bucket__Class* type_info_ref = nullptr;
        }
        inline app::Hashtable_bucket__Class** type_info = &type_info_ref;
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
        inline app::Hashtable_bucket__Array* create_array(const std::vector<app::Hashtable_bucket>& items) {
            return il2cpp::array_new<app::Hashtable_bucket__Array>(get_class(), items);
        }
    } // namespace Hashtable_bucket
} // namespace app::classes::types
