#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OutOfMemoryException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OutOfMemoryException__Class** type_info;
        inline app::OutOfMemoryException__Class* get_class() {
            return il2cpp::get_class<app::OutOfMemoryException__Class>(type_info, "System", "OutOfMemoryException");
        }
        inline app::OutOfMemoryException* create() {
            return il2cpp::create_object<app::OutOfMemoryException>(get_class());
        }
    } // namespace OutOfMemoryException
} // namespace app::classes::types
