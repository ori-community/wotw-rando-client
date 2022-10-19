#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputTriangle__Array {
        inline app::InputTriangle__Array__Class** type_info = (app::InputTriangle__Array__Class**)(modloader::win::memory::resolve_rva(0x0471B5E0));
        inline app::InputTriangle__Array__Class* get_class() {
            return il2cpp::get_class<app::InputTriangle__Array__Class>(type_info, "TriangleNet.IO", "InputTriangle[]");
        }
        inline app::InputTriangle__Array* create() {
            return il2cpp::create_object<app::InputTriangle__Array>(get_class());
        }
    } // namespace InputTriangle__Array
} // namespace app::classes::types
