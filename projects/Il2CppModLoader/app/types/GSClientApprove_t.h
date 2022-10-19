#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GSClientApprove_t {
        namespace {
            inline app::GSClientApprove_t__Class* type_info_ref = nullptr;
        }
        inline app::GSClientApprove_t__Class** type_info = &type_info_ref;
        inline app::GSClientApprove_t__Class* get_class() {
            return il2cpp::get_class<app::GSClientApprove_t__Class>(type_info, "Steamworks", "GSClientApprove_t");
        }
        inline app::GSClientApprove_t* create() {
            return il2cpp::create_object<app::GSClientApprove_t>(get_class());
        }
        inline app::GSClientApprove_t__Boxed* box(app::GSClientApprove_t value) {
            return il2cpp::box_value<app::GSClientApprove_t__Boxed>(get_class(), value);
        }
    } // namespace GSClientApprove_t
} // namespace app::classes::types
