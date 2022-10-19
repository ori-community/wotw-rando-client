#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AggregateException__Array {
        namespace {
            inline app::AggregateException__Array__Class* type_info_ref = nullptr;
        }
        inline app::AggregateException__Array__Class** type_info = &type_info_ref;
        inline app::AggregateException__Array__Class* get_class() {
            return il2cpp::get_class<app::AggregateException__Array__Class>(type_info, "System", "AggregateException[]");
        }
        inline app::AggregateException__Array* create() {
            return il2cpp::create_object<app::AggregateException__Array>(get_class());
        }
    } // namespace AggregateException__Array
} // namespace app::classes::types
