#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MissingMemberException {
        inline app::MissingMemberException__Class** type_info = (app::MissingMemberException__Class**)(modloader::win::memory::resolve_rva(0x04713258));
        inline app::MissingMemberException__Class* get_class() {
            return il2cpp::get_class<app::MissingMemberException__Class>(type_info, "System", "MissingMemberException");
        }
        inline app::MissingMemberException* create() {
            return il2cpp::create_object<app::MissingMemberException>(get_class());
        }
    } // namespace MissingMemberException
} // namespace app::classes::types
