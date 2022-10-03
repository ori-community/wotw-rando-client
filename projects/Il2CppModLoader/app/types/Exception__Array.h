#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Exception__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Exception__Array__Class** type_info;
        inline app::Exception__Array__Class* get_class() {
            return il2cpp::get_class<app::Exception__Array__Class>(type_info, "System", "Exception[]");
        }
        inline app::Exception__Array* create() {
            return il2cpp::create_object<app::Exception__Array>(get_class());
        }
    } // namespace Exception__Array
} // namespace app::classes::types
