#pragma once
#include <Modloader/app/structs/CollisionEventHandler.h>
#include <Modloader/app/structs/CollisionEventHandler__Array.h>
#include <Modloader/app/structs/CollisionEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionEventHandler {
        inline app::CollisionEventHandler__Class** type_info() {
            static app::CollisionEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionEventHandler__Class* get_class() {
            return il2cpp::get_class<app::CollisionEventHandler__Class>(type_info(), "Moon", "CollisionEventHandler");
        }
        inline app::CollisionEventHandler* create() {
            return il2cpp::create_object<app::CollisionEventHandler>(get_class());
        }
        inline app::CollisionEventHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::CollisionEventHandler__Array>(get_class(), size);
        }
        inline app::CollisionEventHandler__Array* create_array(const std::vector<app::CollisionEventHandler*>& items) {
            return il2cpp::array_new<app::CollisionEventHandler__Array>(get_class(), items);
        }
    } // namespace CollisionEventHandler
} // namespace app::classes::types
