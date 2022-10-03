#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimePropertyHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimePropertyHandle__Class** type_info;
        inline app::RuntimePropertyHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimePropertyHandle__Class>(type_info, "Mono", "RuntimePropertyHandle");
        }
        inline app::RuntimePropertyHandle* create() {
            return il2cpp::create_object<app::RuntimePropertyHandle>(get_class());
        }
        inline app::RuntimePropertyHandle__Boxed* box(app::RuntimePropertyHandle value) {
            return il2cpp::box_value<app::RuntimePropertyHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimePropertyHandle
} // namespace app::classes::types
