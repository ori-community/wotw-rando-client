#pragma once
#include <Modloader/app/structs/IPCFailure_t.h>
#include <Modloader/app/structs/IPCFailure_t__Boxed.h>
#include <Modloader/app/structs/IPCFailure_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPCFailure_t {
        inline app::IPCFailure_t__Class** type_info() {
            static app::IPCFailure_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPCFailure_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPCFailure_t__Class* get_class() {
            return il2cpp::get_class<app::IPCFailure_t__Class>(type_info(), "Steamworks", "IPCFailure_t");
        }
        inline app::IPCFailure_t* create() {
            return il2cpp::create_object<app::IPCFailure_t>(get_class());
        }
        inline app::IPCFailure_t__Boxed* box(app::IPCFailure_t value) {
            return il2cpp::box_value<app::IPCFailure_t__Boxed>(get_class(), value);
        }
    } // namespace IPCFailure_t
} // namespace app::classes::types
