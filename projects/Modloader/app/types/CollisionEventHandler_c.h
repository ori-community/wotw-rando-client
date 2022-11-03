#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollisionEventHandler_c {
        inline app::CollisionEventHandler_c__Class** type_info = (app::CollisionEventHandler_c__Class**)(modloader::win::memory::resolve_rva(0x04739068));
        inline app::CollisionEventHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CollisionEventHandler_c__Class>(type_info, "Moon", "CollisionEventHandler", "<>c");
        }
        inline app::CollisionEventHandler_c* create() {
            return il2cpp::create_object<app::CollisionEventHandler_c>(get_class());
        }
    } // namespace CollisionEventHandler_c
} // namespace app::classes::types
