#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt32__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt32__Array__Class** type_info;
        inline app::UInt32__Array__Class* get_class() {
            return il2cpp::get_class<app::UInt32__Array__Class>(type_info, "System", "UInt32[]");
        }
        inline app::UInt32__Array* create() {
            return il2cpp::create_object<app::UInt32__Array>(get_class());
        }
    } // namespace UInt32__Array
} // namespace app::classes::types
