#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollisionContext {
        inline app::CollisionContext__Class** type_info = (app::CollisionContext__Class**)(modloader::win::memory::resolve_rva(0x04719130));
        inline app::CollisionContext__Class* get_class() {
            return il2cpp::get_class<app::CollisionContext__Class>(type_info, "", "CollisionContext");
        }
        inline app::CollisionContext* create() {
            return il2cpp::create_object<app::CollisionContext>(get_class());
        }
    } // namespace CollisionContext
} // namespace app::classes::types
