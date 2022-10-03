#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Enum__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Enum__Array__Class** type_info;
        inline app::Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::Enum__Array__Class>(type_info, "System", "Enum[]");
        }
        inline app::Enum__Array* create() {
            return il2cpp::create_object<app::Enum__Array>(get_class());
        }
    } // namespace Enum__Array
} // namespace app::classes::types
