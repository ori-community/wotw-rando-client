#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InRowChangingEventException {
        inline app::InRowChangingEventException__Class** type_info = (app::InRowChangingEventException__Class**)(modloader::win::memory::resolve_rva(0x0477E5E8));
        inline app::InRowChangingEventException__Class* get_class() {
            return il2cpp::get_class<app::InRowChangingEventException__Class>(type_info, "System.Data", "InRowChangingEventException");
        }
        inline app::InRowChangingEventException* create() {
            return il2cpp::create_object<app::InRowChangingEventException>(get_class());
        }
    } // namespace InRowChangingEventException
} // namespace app::classes::types
