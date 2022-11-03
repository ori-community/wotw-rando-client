#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberAssignment {
        inline app::MemberAssignment__Class** type_info = (app::MemberAssignment__Class**)(modloader::win::memory::resolve_rva(0x04709B28));
        inline app::MemberAssignment__Class* get_class() {
            return il2cpp::get_class<app::MemberAssignment__Class>(type_info, "System.Linq.Expressions", "MemberAssignment");
        }
        inline app::MemberAssignment* create() {
            return il2cpp::create_object<app::MemberAssignment>(get_class());
        }
    } // namespace MemberAssignment
} // namespace app::classes::types
