#pragma once
#include <Modloader/app/structs/MemberBinding.h>
#include <Modloader/app/structs/MemberBinding__Array.h>
#include <Modloader/app/structs/MemberBinding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberBinding {
        inline app::MemberBinding__Class** type_info() {
            static app::MemberBinding__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemberBinding__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemberBinding__Class* get_class() {
            return il2cpp::get_class<app::MemberBinding__Class>(type_info(), "System.Linq.Expressions", "MemberBinding");
        }
        inline app::MemberBinding* create() {
            return il2cpp::create_object<app::MemberBinding>(get_class());
        }
        inline app::MemberBinding__Array* create_array(int size) {
            return il2cpp::array_new<app::MemberBinding__Array>(get_class(), size);
        }
        inline app::MemberBinding__Array* create_array(const std::vector<app::MemberBinding*>& items) {
            return il2cpp::array_new<app::MemberBinding__Array>(get_class(), items);
        }
    } // namespace MemberBinding
} // namespace app::classes::types
