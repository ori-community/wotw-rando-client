#pragma once
#include <Modloader/app/structs/ICameraFrustumSuspendable__Array.h>
#include <Modloader/app/structs/ICameraFrustumSuspendable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICameraFrustumSuspendable__Array {
        inline app::ICameraFrustumSuspendable__Array__Class** type_info() {
            static app::ICameraFrustumSuspendable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICameraFrustumSuspendable__Array__Class**)(modloader::win::memory::resolve_rva(0x04768A50));
            }
            return cache;
        }
        inline app::ICameraFrustumSuspendable__Array__Class* get_class() {
            return il2cpp::get_class<app::ICameraFrustumSuspendable__Array__Class>(type_info(), "", "ICameraFrustumSuspendable[]");
        }
        inline app::ICameraFrustumSuspendable__Array* create() {
            return il2cpp::create_object<app::ICameraFrustumSuspendable__Array>(get_class());
        }
    } // namespace ICameraFrustumSuspendable__Array
} // namespace app::classes::types
