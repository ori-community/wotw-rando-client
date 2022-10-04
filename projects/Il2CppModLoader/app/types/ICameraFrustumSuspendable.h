#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICameraFrustumSuspendable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICameraFrustumSuspendable__Class** type_info;
        inline app::ICameraFrustumSuspendable__Class* get_class() {
            return il2cpp::get_class<app::ICameraFrustumSuspendable__Class>(type_info, "", "ICameraFrustumSuspendable");
        }
        inline app::ICameraFrustumSuspendable__Array* create_array(int size) {
            return il2cpp::array_new<app::ICameraFrustumSuspendable__Array>(get_class(), size);
        }
    } // namespace ICameraFrustumSuspendable
} // namespace app::classes::types
