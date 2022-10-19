#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Constraint__Enum {
        inline app::Constraint__Enum__Class** type_info = (app::Constraint__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472EF60));
        inline app::Constraint__Enum__Class* get_class() {
            return il2cpp::get_class<app::Constraint__Enum__Class>(type_info, "Moon.Timeline", "Constraint");
        }
        inline app::Constraint__Enum* create() {
            return il2cpp::create_object<app::Constraint__Enum>(get_class());
        }
    } // namespace Constraint__Enum
} // namespace app::classes::types
