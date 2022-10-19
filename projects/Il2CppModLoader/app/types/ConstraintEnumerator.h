#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintEnumerator {
        inline app::ConstraintEnumerator__Class** type_info = (app::ConstraintEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04711C78));
        inline app::ConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ConstraintEnumerator__Class>(type_info, "System.Data", "ConstraintEnumerator");
        }
        inline app::ConstraintEnumerator* create() {
            return il2cpp::create_object<app::ConstraintEnumerator>(get_class());
        }
    } // namespace ConstraintEnumerator
} // namespace app::classes::types
