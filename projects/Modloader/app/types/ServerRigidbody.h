#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerRigidbody {
        namespace {
            inline app::ServerRigidbody__Class* type_info_ref = nullptr;
        }
        inline app::ServerRigidbody__Class** type_info = &type_info_ref;
        inline app::ServerRigidbody__Class* get_class() {
            return il2cpp::get_class<app::ServerRigidbody__Class>(type_info, "", "ServerRigidbody");
        }
        inline app::ServerRigidbody* create() {
            return il2cpp::create_object<app::ServerRigidbody>(get_class());
        }
    } // namespace ServerRigidbody
} // namespace app::classes::types
