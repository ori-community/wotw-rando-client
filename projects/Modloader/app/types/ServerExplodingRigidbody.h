#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerExplodingRigidbody__Class.h>
#include <Modloader/app/structs/ServerExplodingRigidbody.h>

namespace app::classes::types {
    namespace ServerExplodingRigidbody {
        namespace {
            inline app::ServerExplodingRigidbody__Class* type_info_ref = nullptr;
        }
        inline app::ServerExplodingRigidbody__Class** type_info = &type_info_ref;
        inline app::ServerExplodingRigidbody__Class* get_class() {
            return il2cpp::get_class<app::ServerExplodingRigidbody__Class>(type_info, "", "ServerExplodingRigidbody");
        }
        inline app::ServerExplodingRigidbody* create() {
            return il2cpp::create_object<app::ServerExplodingRigidbody>(get_class());
        }
    } // namespace ServerExplodingRigidbody
} // namespace app::classes::types
