#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyState__Array {
        inline app::RigidbodyState__Array__Class** type_info = (app::RigidbodyState__Array__Class**)(modloader::win::memory::resolve_rva(0x04750988));
        inline app::RigidbodyState__Array__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyState__Array__Class>(type_info, "", "RigidbodyState[]");
        }
        inline app::RigidbodyState__Array* create() {
            return il2cpp::create_object<app::RigidbodyState__Array>(get_class());
        }
    } // namespace RigidbodyState__Array
} // namespace app::classes::types
