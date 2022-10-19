#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IStrongBox__Array {
        inline app::IStrongBox__Array__Class** type_info = (app::IStrongBox__Array__Class**)(modloader::win::memory::resolve_rva(0x04737F70));
        inline app::IStrongBox__Array__Class* get_class() {
            return il2cpp::get_class<app::IStrongBox__Array__Class>(type_info, "System.Runtime.CompilerServices", "IStrongBox[]");
        }
        inline app::IStrongBox__Array* create() {
            return il2cpp::create_object<app::IStrongBox__Array>(get_class());
        }
    } // namespace IStrongBox__Array
} // namespace app::classes::types
