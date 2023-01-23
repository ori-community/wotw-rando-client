#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MemberMemberBinding__Class.h>
#include <Modloader/app/structs/MemberMemberBinding.h>

namespace app::classes::types {
    namespace MemberMemberBinding {
        inline app::MemberMemberBinding__Class** type_info = (app::MemberMemberBinding__Class**)(modloader::win::memory::resolve_rva(0x047896E0));
        inline app::MemberMemberBinding__Class* get_class() {
            return il2cpp::get_class<app::MemberMemberBinding__Class>(type_info, "System.Linq.Expressions", "MemberMemberBinding");
        }
        inline app::MemberMemberBinding* create() {
            return il2cpp::create_object<app::MemberMemberBinding>(get_class());
        }
    } // namespace MemberMemberBinding
} // namespace app::classes::types
