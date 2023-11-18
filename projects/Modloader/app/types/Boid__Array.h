#pragma once
#include <Modloader/app/structs/Boid__Array.h>
#include <Modloader/app/structs/Boid__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Boid__Array {
        inline app::Boid__Array__Class** type_info() {
            static app::Boid__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Boid__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Boid__Array__Class* get_class() {
            return il2cpp::get_class<app::Boid__Array__Class>(type_info(), "", "Boid[]");
        }
        inline app::Boid__Array* create() {
            return il2cpp::create_object<app::Boid__Array>(get_class());
        }
    } // namespace Boid__Array
} // namespace app::classes::types
