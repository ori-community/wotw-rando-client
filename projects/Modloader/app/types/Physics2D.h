#pragma once
#include <Modloader/app/structs/Physics2D.h>
#include <Modloader/app/structs/Physics2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Physics2D {
        inline app::Physics2D__Class** type_info() {
            static app::Physics2D__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Physics2D__Class**)(modloader::win::memory::resolve_rva(0x04775FA8));
            }
            return cache;
        }
        inline app::Physics2D__Class* get_class() {
            return il2cpp::get_class<app::Physics2D__Class>(type_info(), "UnityEngine", "Physics2D");
        }
        inline app::Physics2D* create() {
            return il2cpp::create_object<app::Physics2D>(get_class());
        }
    } // namespace Physics2D
} // namespace app::classes::types
