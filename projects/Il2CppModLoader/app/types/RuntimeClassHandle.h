#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeClassHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeClassHandle__Class** type_info;
        inline app::RuntimeClassHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeClassHandle__Class>(type_info, "Mono", "RuntimeClassHandle");
        }
        inline app::RuntimeClassHandle* create() {
            return il2cpp::create_object<app::RuntimeClassHandle>(get_class());
        }
        inline app::RuntimeClassHandle__Boxed* box(app::RuntimeClassHandle value) {
            return il2cpp::box_value<app::RuntimeClassHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeClassHandle
} // namespace app::classes::types
