#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberListBinding {
        inline app::MemberListBinding__Class** type_info = (app::MemberListBinding__Class**)(modloader::win::memory::resolve_rva(0x047689D8));
        inline app::MemberListBinding__Class* get_class() {
            return il2cpp::get_class<app::MemberListBinding__Class>(type_info, "System.Linq.Expressions", "MemberListBinding");
        }
        inline app::MemberListBinding* create() {
            return il2cpp::create_object<app::MemberListBinding>(get_class());
        }
    } // namespace MemberListBinding
} // namespace app::classes::types
