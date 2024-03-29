#pragma once
#include <Modloader/app/structs/ServerRigidbody_RigidbodyData.h>
#include <Modloader/app/structs/ServerRigidbody_RigidbodyData__Boxed.h>
#include <Modloader/app/structs/ServerRigidbody_RigidbodyData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerRigidbody_RigidbodyData {
        inline app::ServerRigidbody_RigidbodyData__Class** type_info() {
            static app::ServerRigidbody_RigidbodyData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerRigidbody_RigidbodyData__Class**)(modloader::win::memory::resolve_rva(0x04794820));
            }
            return cache;
        }
        inline app::ServerRigidbody_RigidbodyData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerRigidbody_RigidbodyData__Class>(type_info(), "", "ServerRigidbody", "RigidbodyData");
        }
        inline app::ServerRigidbody_RigidbodyData* create() {
            return il2cpp::create_object<app::ServerRigidbody_RigidbodyData>(get_class());
        }
        inline app::ServerRigidbody_RigidbodyData__Boxed* box(app::ServerRigidbody_RigidbodyData value) {
            return il2cpp::box_value<app::ServerRigidbody_RigidbodyData__Boxed>(get_class(), value);
        }
    } // namespace ServerRigidbody_RigidbodyData
} // namespace app::classes::types
