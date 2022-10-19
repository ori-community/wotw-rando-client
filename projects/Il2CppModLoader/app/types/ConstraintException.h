#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintException {
        inline app::ConstraintException__Class** type_info = (app::ConstraintException__Class**)(modloader::win::memory::resolve_rva(0x04775680));
        inline app::ConstraintException__Class* get_class() {
            return il2cpp::get_class<app::ConstraintException__Class>(type_info, "System.Data", "ConstraintException");
        }
        inline app::ConstraintException* create() {
            return il2cpp::create_object<app::ConstraintException>(get_class());
        }
    } // namespace ConstraintException
} // namespace app::classes::types
