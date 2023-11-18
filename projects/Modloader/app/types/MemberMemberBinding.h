#pragma once
#include <Modloader/app/structs/MemberMemberBinding.h>
#include <Modloader/app/structs/MemberMemberBinding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberMemberBinding {
        inline app::MemberMemberBinding__Class** type_info() {
            static app::MemberMemberBinding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberMemberBinding__Class**)(modloader::win::memory::resolve_rva(0x047896E0));
            }
            return cache;
        }
        inline app::MemberMemberBinding__Class* get_class() {
            return il2cpp::get_class<app::MemberMemberBinding__Class>(type_info(), "System.Linq.Expressions", "MemberMemberBinding");
        }
        inline app::MemberMemberBinding* create() {
            return il2cpp::create_object<app::MemberMemberBinding>(get_class());
        }
    } // namespace MemberMemberBinding
} // namespace app::classes::types
