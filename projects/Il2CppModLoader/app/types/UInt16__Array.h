#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UInt16__Array {
        inline app::UInt16__Array__Class** type_info = (app::UInt16__Array__Class**)(modloader::win::memory::resolve_rva(0x0478D768));
        inline app::UInt16__Array__Class* get_class() {
            return il2cpp::get_class<app::UInt16__Array__Class>(type_info, "System", "UInt16[]");
        }
        inline app::UInt16__Array* create() {
            return il2cpp::create_object<app::UInt16__Array>(get_class());
        }
    } // namespace UInt16__Array
} // namespace app::classes::types
