#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValidateAuthTicketResponse_t {
        namespace {
            inline app::ValidateAuthTicketResponse_t__Class* type_info_ref = nullptr;
        }
        inline app::ValidateAuthTicketResponse_t__Class** type_info = &type_info_ref;
        inline app::ValidateAuthTicketResponse_t__Class* get_class() {
            return il2cpp::get_class<app::ValidateAuthTicketResponse_t__Class>(type_info, "Steamworks", "ValidateAuthTicketResponse_t");
        }
        inline app::ValidateAuthTicketResponse_t* create() {
            return il2cpp::create_object<app::ValidateAuthTicketResponse_t>(get_class());
        }
        inline app::ValidateAuthTicketResponse_t__Boxed* box(app::ValidateAuthTicketResponse_t value) {
            return il2cpp::box_value<app::ValidateAuthTicketResponse_t__Boxed>(get_class(), value);
        }
    } // namespace ValidateAuthTicketResponse_t
} // namespace app::classes::types
