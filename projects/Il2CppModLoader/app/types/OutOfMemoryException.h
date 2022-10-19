#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OutOfMemoryException {
        inline app::OutOfMemoryException__Class** type_info = (app::OutOfMemoryException__Class**)(modloader::win::memory::resolve_rva(0x0470EB60));
        inline app::OutOfMemoryException__Class* get_class() {
            return il2cpp::get_class<app::OutOfMemoryException__Class>(type_info, "System", "OutOfMemoryException");
        }
        inline app::OutOfMemoryException* create() {
            return il2cpp::create_object<app::OutOfMemoryException>(get_class());
        }
    } // namespace OutOfMemoryException
} // namespace app::classes::types
