#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntPtr {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IntPtr__Class** type_info;
        inline app::IntPtr__Class* get_class() {
            return il2cpp::get_class<app::IntPtr__Class>(type_info, "System", "IntPtr");
        }
        inline app::IntPtr* create() {
            return il2cpp::create_object<app::IntPtr>(get_class());
        }
        inline app::IntPtr__Boxed* box(void* value) {
            return il2cpp::box_value<app::IntPtr__Boxed>(get_class(), value);
        }
        inline app::IntPtr__Array* create_array(int size) {
            return il2cpp::array_new<app::IntPtr__Array>(get_class(), size);
        }
        inline app::IntPtr__Array* create_array(const std::vector<void*>& items) {
            return il2cpp::array_new<app::IntPtr__Array>(get_class(), items);
        }
    } // namespace IntPtr
} // namespace app::classes::types
