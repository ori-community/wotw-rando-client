#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICameraFrustumSuspendable {
        inline app::ICameraFrustumSuspendable__Class** type_info = (app::ICameraFrustumSuspendable__Class**)(modloader::win::memory::resolve_rva(0x047802E8));
        inline app::ICameraFrustumSuspendable__Class* get_class() {
            return il2cpp::get_class<app::ICameraFrustumSuspendable__Class>(type_info, "", "ICameraFrustumSuspendable");
        }
        inline app::ICameraFrustumSuspendable__Array* create_array(int size) {
            return il2cpp::array_new<app::ICameraFrustumSuspendable__Array>(get_class(), size);
        }
        inline app::ICameraFrustumSuspendable__Array* create_array(const std::vector<app::ICameraFrustumSuspendable*>& items) {
            return il2cpp::array_new<app::ICameraFrustumSuspendable__Array>(get_class(), items);
        }
    } // namespace ICameraFrustumSuspendable
} // namespace app::classes::types
