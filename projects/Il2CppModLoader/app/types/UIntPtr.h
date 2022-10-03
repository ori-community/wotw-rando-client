#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UIntPtr {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UIntPtr__Class** type_info;
        inline app::UIntPtr__Class* get_class() {
            return il2cpp::get_class<app::UIntPtr__Class>(type_info, "System", "UIntPtr");
        }
        inline app::UIntPtr* create() {
            return il2cpp::create_object<app::UIntPtr>(get_class());
        }
        inline app::UIntPtr__Boxed* box(void* value) {
            return il2cpp::box_value<app::UIntPtr__Boxed>(get_class(), value);
        }
        inline app::UIntPtr__Array* create_array(int size) {
            return il2cpp::array_new<app::UIntPtr__Array>(get_class(), size);
        }
    } // namespace UIntPtr
} // namespace app::classes::types
