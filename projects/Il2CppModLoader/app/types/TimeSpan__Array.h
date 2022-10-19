#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSpan__Array {
        inline app::TimeSpan__Array__Class** type_info = (app::TimeSpan__Array__Class**)(modloader::win::memory::resolve_rva(0x04749F08));
        inline app::TimeSpan__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeSpan__Array__Class>(type_info, "System", "TimeSpan[]");
        }
        inline app::TimeSpan__Array* create() {
            return il2cpp::create_object<app::TimeSpan__Array>(get_class());
        }
    } // namespace TimeSpan__Array
} // namespace app::classes::types
