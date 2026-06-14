#pragma once
#include <Modloader/app/structs/CollisionContext.h>
#include <Modloader/app/structs/CollisionContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionContext {
        inline app::CollisionContext__Class** type_info() {
            static app::CollisionContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CollisionContext__Class**)(modloader::win::memory::resolve_rva(0x04719130));
            }
            return cache;
        }
        inline app::CollisionContext__Class* get_class() {
            return il2cpp::get_class<app::CollisionContext__Class>(type_info(), "", "CollisionContext");
        }
        inline app::CollisionContext* create() {
            return il2cpp::create_object<app::CollisionContext>(get_class());
        }
    } // namespace CollisionContext
} // namespace app::classes::types
