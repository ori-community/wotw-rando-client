#pragma once
#include <Modloader/app/structs/BatchedRaycast.h>
#include <Modloader/app/structs/BatchedRaycast__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BatchedRaycast {
        inline app::BatchedRaycast__Class** type_info() {
            static app::BatchedRaycast__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BatchedRaycast__Class**)(modloader::win::memory::resolve_rva(0x04770BB0));
            }
            return cache;
        }
        inline app::BatchedRaycast__Class* get_class() {
            return il2cpp::get_class<app::BatchedRaycast__Class>(type_info(), "", "BatchedRaycast");
        }
        inline app::BatchedRaycast* create() {
            return il2cpp::create_object<app::BatchedRaycast>(get_class());
        }
    } // namespace BatchedRaycast
} // namespace app::classes::types
