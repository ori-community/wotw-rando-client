#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeConstructorInfo__Array {
        inline app::RuntimeConstructorInfo__Array__Class** type_info = (app::RuntimeConstructorInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04786640));
        inline app::RuntimeConstructorInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeConstructorInfo__Array__Class>(type_info, "System.Reflection", "RuntimeConstructorInfo[]");
        }
        inline app::RuntimeConstructorInfo__Array* create() {
            return il2cpp::create_object<app::RuntimeConstructorInfo__Array>(get_class());
        }
    } // namespace RuntimeConstructorInfo__Array
} // namespace app::classes::types
