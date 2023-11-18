#pragma once
#include <Modloader/app/structs/AttributeUsageAttribute__Array.h>
#include <Modloader/app/structs/AttributeUsageAttribute__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributeUsageAttribute__Array {
        inline app::AttributeUsageAttribute__Array__Class** type_info() {
            static app::AttributeUsageAttribute__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttributeUsageAttribute__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttributeUsageAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::AttributeUsageAttribute__Array__Class>(type_info(), "System", "AttributeUsageAttribute[]");
        }
        inline app::AttributeUsageAttribute__Array* create() {
            return il2cpp::create_object<app::AttributeUsageAttribute__Array>(get_class());
        }
    } // namespace AttributeUsageAttribute__Array
} // namespace app::classes::types
