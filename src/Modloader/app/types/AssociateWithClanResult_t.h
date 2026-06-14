#pragma once
#include <Modloader/app/structs/AssociateWithClanResult_t.h>
#include <Modloader/app/structs/AssociateWithClanResult_t__Boxed.h>
#include <Modloader/app/structs/AssociateWithClanResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssociateWithClanResult_t {
        inline app::AssociateWithClanResult_t__Class** type_info() {
            static app::AssociateWithClanResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssociateWithClanResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssociateWithClanResult_t__Class* get_class() {
            return il2cpp::get_class<app::AssociateWithClanResult_t__Class>(type_info(), "Steamworks", "AssociateWithClanResult_t");
        }
        inline app::AssociateWithClanResult_t* create() {
            return il2cpp::create_object<app::AssociateWithClanResult_t>(get_class());
        }
        inline app::AssociateWithClanResult_t__Boxed* box(app::AssociateWithClanResult_t value) {
            return il2cpp::box_value<app::AssociateWithClanResult_t__Boxed>(get_class(), value);
        }
    } // namespace AssociateWithClanResult_t
} // namespace app::classes::types
