#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CallbackMsg_t__Class.h>
#include <Modloader/app/structs/CallbackMsg_t.h>
#include <Modloader/app/structs/CallbackMsg_t__Boxed.h>

namespace app::classes::types {
    namespace CallbackMsg_t {
        namespace {
            inline app::CallbackMsg_t__Class* type_info_ref = nullptr;
        }
        inline app::CallbackMsg_t__Class** type_info = &type_info_ref;
        inline app::CallbackMsg_t__Class* get_class() {
            return il2cpp::get_class<app::CallbackMsg_t__Class>(type_info, "Steamworks", "CallbackMsg_t");
        }
        inline app::CallbackMsg_t* create() {
            return il2cpp::create_object<app::CallbackMsg_t>(get_class());
        }
        inline app::CallbackMsg_t__Boxed* box(app::CallbackMsg_t value) {
            return il2cpp::box_value<app::CallbackMsg_t__Boxed>(get_class(), value);
        }
    } // namespace CallbackMsg_t
} // namespace app::classes::types
