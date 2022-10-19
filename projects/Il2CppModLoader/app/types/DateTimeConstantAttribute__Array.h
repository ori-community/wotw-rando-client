#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeConstantAttribute__Array {
        inline app::DateTimeConstantAttribute__Array__Class** type_info = (app::DateTimeConstantAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x04734AE8));
        inline app::DateTimeConstantAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::DateTimeConstantAttribute__Array__Class>(type_info, "System.Runtime.CompilerServices", "DateTimeConstantAttribute[]");
        }
        inline app::DateTimeConstantAttribute__Array* create() {
            return il2cpp::create_object<app::DateTimeConstantAttribute__Array>(get_class());
        }
    } // namespace DateTimeConstantAttribute__Array
} // namespace app::classes::types
