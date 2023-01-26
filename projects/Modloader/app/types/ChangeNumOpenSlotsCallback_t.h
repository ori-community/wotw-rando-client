#pragma once
#include <Modloader/app/structs/ChangeNumOpenSlotsCallback_t.h>
#include <Modloader/app/structs/ChangeNumOpenSlotsCallback_t__Boxed.h>
#include <Modloader/app/structs/ChangeNumOpenSlotsCallback_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeNumOpenSlotsCallback_t {
        inline app::ChangeNumOpenSlotsCallback_t__Class** type_info() {
            static app::ChangeNumOpenSlotsCallback_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeNumOpenSlotsCallback_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeNumOpenSlotsCallback_t__Class* get_class() {
            return il2cpp::get_class<app::ChangeNumOpenSlotsCallback_t__Class>(type_info(), "Steamworks", "ChangeNumOpenSlotsCallback_t");
        }
        inline app::ChangeNumOpenSlotsCallback_t* create() {
            return il2cpp::create_object<app::ChangeNumOpenSlotsCallback_t>(get_class());
        }
        inline app::ChangeNumOpenSlotsCallback_t__Boxed* box(app::ChangeNumOpenSlotsCallback_t value) {
            return il2cpp::box_value<app::ChangeNumOpenSlotsCallback_t__Boxed>(get_class(), value);
        }
    } // namespace ChangeNumOpenSlotsCallback_t
} // namespace app::classes::types
