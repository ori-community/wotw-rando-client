#pragma once
#include <Modloader/app/structs/GSClientApprove_t.h>
#include <Modloader/app/structs/GSClientApprove_t__Boxed.h>
#include <Modloader/app/structs/GSClientApprove_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GSClientApprove_t {
        inline app::GSClientApprove_t__Class** type_info() {
            static app::GSClientApprove_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GSClientApprove_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GSClientApprove_t__Class* get_class() {
            return il2cpp::get_class<app::GSClientApprove_t__Class>(type_info(), "Steamworks", "GSClientApprove_t");
        }
        inline app::GSClientApprove_t* create() {
            return il2cpp::create_object<app::GSClientApprove_t>(get_class());
        }
        inline app::GSClientApprove_t__Boxed* box(app::GSClientApprove_t value) {
            return il2cpp::box_value<app::GSClientApprove_t__Boxed>(get_class(), value);
        }
    } // namespace GSClientApprove_t
} // namespace app::classes::types
