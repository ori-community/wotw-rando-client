#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt16__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt16__Array__Class** type_info;
        inline app::UInt16__Array__Class* get_class() {
            return il2cpp::get_class<app::UInt16__Array__Class>(type_info, "System", "UInt16[]");
        }
        inline app::UInt16__Array* create() {
            return il2cpp::create_object<app::UInt16__Array>(get_class());
        }
    } // namespace UInt16__Array
} // namespace app::classes::types
