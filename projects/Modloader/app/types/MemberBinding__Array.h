#pragma once
#include <Modloader/app/structs/MemberBinding__Array.h>
#include <Modloader/app/structs/MemberBinding__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberBinding__Array {
        inline app::MemberBinding__Array__Class** type_info() {
            static app::MemberBinding__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemberBinding__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemberBinding__Array__Class* get_class() {
            return il2cpp::get_class<app::MemberBinding__Array__Class>(type_info(), "System.Linq.Expressions", "MemberBinding[]");
        }
        inline app::MemberBinding__Array* create() {
            return il2cpp::create_object<app::MemberBinding__Array>(get_class());
        }
    } // namespace MemberBinding__Array
} // namespace app::classes::types
