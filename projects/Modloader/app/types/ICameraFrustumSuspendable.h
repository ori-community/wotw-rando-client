#pragma once
#include <Modloader/app/structs/ICameraFrustumSuspendable.h>
#include <Modloader/app/structs/ICameraFrustumSuspendable__Array.h>
#include <Modloader/app/structs/ICameraFrustumSuspendable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICameraFrustumSuspendable {
        inline app::ICameraFrustumSuspendable__Class** type_info() {
            static app::ICameraFrustumSuspendable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICameraFrustumSuspendable__Class**)(modloader::win::memory::resolve_rva(0x047802E8));
            }
            return cache;
        }
        inline app::ICameraFrustumSuspendable__Class* get_class() {
            return il2cpp::get_class<app::ICameraFrustumSuspendable__Class>(type_info(), "", "ICameraFrustumSuspendable");
        }
        inline app::ICameraFrustumSuspendable__Array* create_array(int size) {
            return il2cpp::array_new<app::ICameraFrustumSuspendable__Array>(get_class(), size);
        }
        inline app::ICameraFrustumSuspendable__Array* create_array(const std::vector<app::ICameraFrustumSuspendable*>& items) {
            return il2cpp::array_new<app::ICameraFrustumSuspendable__Array>(get_class(), items);
        }
    } // namespace ICameraFrustumSuspendable
} // namespace app::classes::types
