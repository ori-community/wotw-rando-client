#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int32__Class** type_info;
        inline app::Int32__Class* get_class() {
            return il2cpp::get_class<app::Int32__Class>(type_info, "System", "Int32");
        }
        inline app::Int32* create() {
            return il2cpp::create_object<app::Int32>(get_class());
        }
        inline app::Int32__Boxed* box(int32_t value) {
            return il2cpp::box_value<app::Int32__Boxed>(get_class(), value);
        }
        inline app::Int32__Array* create_array(int size) {
            return il2cpp::array_new<app::Int32__Array>(get_class(), size);
        }
        inline app::Int32__Array* create_array(const std::vector<int32_t>& items) {
            return il2cpp::array_new<app::Int32__Array>(get_class(), items);
        }
    } // namespace Int32
} // namespace app::classes::types
