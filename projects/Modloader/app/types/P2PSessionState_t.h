#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/P2PSessionState_t__Class.h>
#include <Modloader/app/structs/P2PSessionState_t.h>
#include <Modloader/app/structs/P2PSessionState_t__Boxed.h>

namespace app::classes::types {
    namespace P2PSessionState_t {
        namespace {
            inline app::P2PSessionState_t__Class* type_info_ref = nullptr;
        }
        inline app::P2PSessionState_t__Class** type_info = &type_info_ref;
        inline app::P2PSessionState_t__Class* get_class() {
            return il2cpp::get_class<app::P2PSessionState_t__Class>(type_info, "Steamworks", "P2PSessionState_t");
        }
        inline app::P2PSessionState_t* create() {
            return il2cpp::create_object<app::P2PSessionState_t>(get_class());
        }
        inline app::P2PSessionState_t__Boxed* box(app::P2PSessionState_t value) {
            return il2cpp::box_value<app::P2PSessionState_t__Boxed>(get_class(), value);
        }
    } // namespace P2PSessionState_t
} // namespace app::classes::types
