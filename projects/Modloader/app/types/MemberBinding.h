#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberBinding {
        namespace {
            inline app::MemberBinding__Class* type_info_ref = nullptr;
        }
        inline app::MemberBinding__Class** type_info = &type_info_ref;
        inline app::MemberBinding__Class* get_class() {
            return il2cpp::get_class<app::MemberBinding__Class>(type_info, "System.Linq.Expressions", "MemberBinding");
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
