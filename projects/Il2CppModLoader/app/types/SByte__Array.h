#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SByte__Array {
        inline app::SByte__Array__Class** type_info = (app::SByte__Array__Class**)(modloader::win::memory::resolve_rva(0x047705B0));
        inline app::SByte__Array__Class* get_class() {
            return il2cpp::get_class<app::SByte__Array__Class>(type_info, "System", "SByte[]");
        }
        inline app::SByte__Array* create() {
            return il2cpp::create_object<app::SByte__Array>(get_class());
        }
    } // namespace SByte__Array
} // namespace app::classes::types
