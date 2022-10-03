#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICameraFrustumSuspendable__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICameraFrustumSuspendable__Array__Class** type_info;
        inline app::ICameraFrustumSuspendable__Array__Class* get_class() {
            return il2cpp::get_class<app::ICameraFrustumSuspendable__Array__Class>(type_info, "", "ICameraFrustumSuspendable[]");
        }
        inline app::ICameraFrustumSuspendable__Array* create() {
            return il2cpp::create_object<app::ICameraFrustumSuspendable__Array>(get_class());
        }
    } // namespace ICameraFrustumSuspendable__Array
} // namespace app::classes::types
