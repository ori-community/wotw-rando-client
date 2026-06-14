#pragma once
#include <Modloader/app/structs/BatchedSpherecast.h>
#include <Modloader/app/structs/BatchedSpherecast__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BatchedSpherecast {
        inline app::BatchedSpherecast__Class** type_info() {
            static app::BatchedSpherecast__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BatchedSpherecast__Class**)(modloader::win::memory::resolve_rva(0x047111C8));
            }
            return cache;
        }
        inline app::BatchedSpherecast__Class* get_class() {
            return il2cpp::get_class<app::BatchedSpherecast__Class>(type_info(), "", "BatchedSpherecast");
        }
        inline app::BatchedSpherecast* create() {
            return il2cpp::create_object<app::BatchedSpherecast>(get_class());
        }
    } // namespace BatchedSpherecast
} // namespace app::classes::types
