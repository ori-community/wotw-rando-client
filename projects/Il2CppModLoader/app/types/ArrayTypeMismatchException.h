#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArrayTypeMismatchException {
        inline app::ArrayTypeMismatchException__Class** type_info = (app::ArrayTypeMismatchException__Class**)(modloader::win::memory::resolve_rva(0x04702608));
        inline app::ArrayTypeMismatchException__Class* get_class() {
            return il2cpp::get_class<app::ArrayTypeMismatchException__Class>(type_info, "System", "ArrayTypeMismatchException");
        }
        inline app::ArrayTypeMismatchException* create() {
            return il2cpp::create_object<app::ArrayTypeMismatchException>(get_class());
        }
    } // namespace ArrayTypeMismatchException
} // namespace app::classes::types
