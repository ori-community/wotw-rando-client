#pragma once
#include <Modloader/app/structs/AccountID_t.h>
#include <Modloader/app/structs/AccountID_t__Boxed.h>
#include <Modloader/app/structs/AccountID_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AccountID_t {
        inline app::AccountID_t__Class** type_info() {
            static app::AccountID_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AccountID_t__Class**)(modloader::win::memory::resolve_rva(0x0478CD78));
            }
            return cache;
        }
        inline app::AccountID_t__Class* get_class() {
            return il2cpp::get_class<app::AccountID_t__Class>(type_info(), "Steamworks", "AccountID_t");
        }
        inline app::AccountID_t* create() {
            return il2cpp::create_object<app::AccountID_t>(get_class());
        }
        inline app::AccountID_t__Boxed* box(app::AccountID_t value) {
            return il2cpp::box_value<app::AccountID_t__Boxed>(get_class(), value);
        }
    } // namespace AccountID_t
} // namespace app::classes::types
