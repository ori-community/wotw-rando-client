#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Uri__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Uri__Array__Class** type_info;
        inline app::Uri__Array__Class* get_class() {
            return il2cpp::get_class<app::Uri__Array__Class>(type_info, "System", "Uri[]");
        }
        inline app::Uri__Array* create() {
            return il2cpp::create_object<app::Uri__Array>(get_class());
        }
    } // namespace Uri__Array
} // namespace app::classes::types
