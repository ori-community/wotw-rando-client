#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int32Enum__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int32Enum__Enum__Class** type_info;
        inline app::Int32Enum__Enum__Class* get_class() {
            return il2cpp::get_class<app::Int32Enum__Enum__Class>(type_info, "System", "Int32Enum");
        }
        inline app::Int32Enum__Enum* create() {
            return il2cpp::create_object<app::Int32Enum__Enum>(get_class());
        }
        inline app::Int32Enum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Int32Enum__Enum__Array>(get_class(), size);
        }
        inline app::Int32Enum__Enum__Array* create_array(const std::vector<app::Int32Enum__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::Int32Enum__Enum__Array>(get_class(), items);
        }
    } // namespace Int32Enum__Enum
} // namespace app::classes::types
