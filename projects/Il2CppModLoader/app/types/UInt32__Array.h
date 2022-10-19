#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UInt32__Array {
        inline app::UInt32__Array__Class** type_info = (app::UInt32__Array__Class**)(modloader::win::memory::resolve_rva(0x04734C60));
        inline app::UInt32__Array__Class* get_class() {
            return il2cpp::get_class<app::UInt32__Array__Class>(type_info, "System", "UInt32[]");
        }
        inline app::UInt32__Array* create() {
            return il2cpp::create_object<app::UInt32__Array>(get_class());
        }
    } // namespace UInt32__Array
} // namespace app::classes::types
