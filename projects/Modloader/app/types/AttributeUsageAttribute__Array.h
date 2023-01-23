#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttributeUsageAttribute__Array__Class.h>
#include <Modloader/app/structs/AttributeUsageAttribute__Array.h>

namespace app::classes::types {
    namespace AttributeUsageAttribute__Array {
        namespace {
            inline app::AttributeUsageAttribute__Array__Class* type_info_ref = nullptr;
        }
        inline app::AttributeUsageAttribute__Array__Class** type_info = &type_info_ref;
        inline app::AttributeUsageAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::AttributeUsageAttribute__Array__Class>(type_info, "System", "AttributeUsageAttribute[]");
        }
        inline app::AttributeUsageAttribute__Array* create() {
            return il2cpp::create_object<app::AttributeUsageAttribute__Array>(get_class());
        }
    } // namespace AttributeUsageAttribute__Array
} // namespace app::classes::types
