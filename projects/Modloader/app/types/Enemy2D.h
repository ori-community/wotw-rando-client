#pragma once
#include <Modloader/app/structs/Enemy2D.h>
#include <Modloader/app/structs/Enemy2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Enemy2D {
        inline app::Enemy2D__Class** type_info() {
            static app::Enemy2D__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Enemy2D__Class**)(modloader::win::memory::resolve_rva(0x04724470));
            }
            return cache;
        }
        inline app::Enemy2D__Class* get_class() {
            return il2cpp::get_class<app::Enemy2D__Class>(type_info(), "", "Enemy2D");
        }
        inline app::Enemy2D* create() {
            return il2cpp::create_object<app::Enemy2D>(get_class());
        }
    } // namespace Enemy2D
} // namespace app::classes::types
