#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Array {
        inline app::Array__Class** type_info = (app::Array__Class**)(modloader::win::memory::resolve_rva(0x04780E98));
        inline app::Array__Class* get_class() {
            return il2cpp::get_class<app::Array__Class>(type_info, "System", "Array");
        }
        inline app::Array* create() {
            return il2cpp::create_object<app::Array>(get_class());
        }
    } // namespace Array
} // namespace app::classes::types
