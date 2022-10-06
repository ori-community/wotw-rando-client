#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AggregateException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AggregateException__Class** type_info;
        inline app::AggregateException__Class* get_class() {
            return il2cpp::get_class<app::AggregateException__Class>(type_info, "System", "AggregateException");
        }
        inline app::AggregateException* create() {
            return il2cpp::create_object<app::AggregateException>(get_class());
        }
        inline app::AggregateException__Array* create_array(int size) {
            return il2cpp::array_new<app::AggregateException__Array>(get_class(), size);
        }
        inline app::AggregateException__Array* create_array(const std::vector<app::AggregateException*>& items) {
            return il2cpp::array_new<app::AggregateException__Array>(get_class(), items);
        }
    } // namespace AggregateException
} // namespace app::classes::types
