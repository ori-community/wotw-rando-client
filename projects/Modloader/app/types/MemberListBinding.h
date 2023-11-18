#pragma once
#include <Modloader/app/structs/MemberListBinding.h>
#include <Modloader/app/structs/MemberListBinding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberListBinding {
        inline app::MemberListBinding__Class** type_info() {
            static app::MemberListBinding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberListBinding__Class**)(modloader::win::memory::resolve_rva(0x047689D8));
            }
            return cache;
        }
        inline app::MemberListBinding__Class* get_class() {
            return il2cpp::get_class<app::MemberListBinding__Class>(type_info(), "System.Linq.Expressions", "MemberListBinding");
        }
        inline app::MemberListBinding* create() {
            return il2cpp::create_object<app::MemberListBinding>(get_class());
        }
    } // namespace MemberListBinding
} // namespace app::classes::types
