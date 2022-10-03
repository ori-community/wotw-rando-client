#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SByte__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SByte__Array__Class** type_info;
        inline app::SByte__Array__Class* get_class() {
            return il2cpp::get_class<app::SByte__Array__Class>(type_info, "System", "SByte[]");
        }
        inline app::SByte__Array* create() {
            return il2cpp::create_object<app::SByte__Array>(get_class());
        }
    } // namespace SByte__Array
} // namespace app::classes::types
