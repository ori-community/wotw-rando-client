#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssociateWithClanResult_t {
        namespace {
            inline app::AssociateWithClanResult_t__Class* type_info_ref = nullptr;
        }
        inline app::AssociateWithClanResult_t__Class** type_info = &type_info_ref;
        inline app::AssociateWithClanResult_t__Class* get_class() {
            return il2cpp::get_class<app::AssociateWithClanResult_t__Class>(type_info, "Steamworks", "AssociateWithClanResult_t");
        }
        inline app::AssociateWithClanResult_t* create() {
            return il2cpp::create_object<app::AssociateWithClanResult_t>(get_class());
        }
        inline app::AssociateWithClanResult_t__Boxed* box(app::AssociateWithClanResult_t value) {
            return il2cpp::box_value<app::AssociateWithClanResult_t__Boxed>(get_class(), value);
        }
    } // namespace AssociateWithClanResult_t
} // namespace app::classes::types
