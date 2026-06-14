#pragma once
#include <Modloader/app/structs/GSClientGroupStatus_t.h>
#include <Modloader/app/structs/GSClientGroupStatus_t__Boxed.h>
#include <Modloader/app/structs/GSClientGroupStatus_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GSClientGroupStatus_t {
        inline app::GSClientGroupStatus_t__Class** type_info() {
            static app::GSClientGroupStatus_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GSClientGroupStatus_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GSClientGroupStatus_t__Class* get_class() {
            return il2cpp::get_class<app::GSClientGroupStatus_t__Class>(type_info(), "Steamworks", "GSClientGroupStatus_t");
        }
        inline app::GSClientGroupStatus_t* create() {
            return il2cpp::create_object<app::GSClientGroupStatus_t>(get_class());
        }
        inline app::GSClientGroupStatus_t__Boxed* box(app::GSClientGroupStatus_t value) {
            return il2cpp::box_value<app::GSClientGroupStatus_t__Boxed>(get_class(), value);
        }
    } // namespace GSClientGroupStatus_t
} // namespace app::classes::types
