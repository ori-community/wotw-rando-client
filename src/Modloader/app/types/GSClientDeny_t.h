#pragma once
#include <Modloader/app/structs/GSClientDeny_t.h>
#include <Modloader/app/structs/GSClientDeny_t__Boxed.h>
#include <Modloader/app/structs/GSClientDeny_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GSClientDeny_t {
        inline app::GSClientDeny_t__Class** type_info() {
            static app::GSClientDeny_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GSClientDeny_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GSClientDeny_t__Class* get_class() {
            return il2cpp::get_class<app::GSClientDeny_t__Class>(type_info(), "Steamworks", "GSClientDeny_t");
        }
        inline app::GSClientDeny_t* create() {
            return il2cpp::create_object<app::GSClientDeny_t>(get_class());
        }
        inline app::GSClientDeny_t__Boxed* box(app::GSClientDeny_t value) {
            return il2cpp::box_value<app::GSClientDeny_t__Boxed>(get_class(), value);
        }
    } // namespace GSClientDeny_t
} // namespace app::classes::types
