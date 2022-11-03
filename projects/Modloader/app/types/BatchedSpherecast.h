#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BatchedSpherecast {
        inline app::BatchedSpherecast__Class** type_info = (app::BatchedSpherecast__Class**)(modloader::win::memory::resolve_rva(0x047111C8));
        inline app::BatchedSpherecast__Class* get_class() {
            return il2cpp::get_class<app::BatchedSpherecast__Class>(type_info, "", "BatchedSpherecast");
        }
        inline app::BatchedSpherecast* create() {
            return il2cpp::create_object<app::BatchedSpherecast>(get_class());
        }
    } // namespace BatchedSpherecast
} // namespace app::classes::types
