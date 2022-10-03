#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeFieldHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeFieldHandle__Class** type_info;
        inline app::RuntimeFieldHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeFieldHandle__Class>(type_info, "System", "RuntimeFieldHandle");
        }
        inline app::RuntimeFieldHandle* create() {
            return il2cpp::create_object<app::RuntimeFieldHandle>(get_class());
        }
        inline app::RuntimeFieldHandle__Boxed* box(app::RuntimeFieldHandle value) {
            return il2cpp::box_value<app::RuntimeFieldHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeFieldHandle
} // namespace app::classes::types
