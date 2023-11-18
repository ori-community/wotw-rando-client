#pragma once
#include <Modloader/app/structs/Delegate__Array.h>
#include <Modloader/app/structs/Delegate__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Delegate__Array {
        inline app::Delegate__Array__Class** type_info() {
            static app::Delegate__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Delegate__Array__Class**)(modloader::win::memory::resolve_rva(0x0472D340));
            }
            return cache;
        }
        inline app::Delegate__Array__Class* get_class() {
            return il2cpp::get_class<app::Delegate__Array__Class>(type_info(), "System", "Delegate[]");
        }
        inline app::Delegate__Array* create() {
            return il2cpp::create_object<app::Delegate__Array>(get_class());
        }
    } // namespace Delegate__Array
} // namespace app::classes::types
