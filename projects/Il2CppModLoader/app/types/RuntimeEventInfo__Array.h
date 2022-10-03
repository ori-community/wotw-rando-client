#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeEventInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeEventInfo__Array__Class** type_info;
        inline app::RuntimeEventInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeEventInfo__Array__Class>(type_info, "System.Reflection", "RuntimeEventInfo[]");
        }
        inline app::RuntimeEventInfo__Array* create() {
            return il2cpp::create_object<app::RuntimeEventInfo__Array>(get_class());
        }
    } // namespace RuntimeEventInfo__Array
} // namespace app::classes::types
