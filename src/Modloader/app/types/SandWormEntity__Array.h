#pragma once
#include <Modloader/app/structs/SandWormEntity__Array.h>
#include <Modloader/app/structs/SandWormEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity__Array {
        inline app::SandWormEntity__Array__Class** type_info() {
            static app::SandWormEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::SandWormEntity__Array__Class>(type_info(), "", "SandWormEntity[]");
        }
        inline app::SandWormEntity__Array* create() {
            return il2cpp::create_object<app::SandWormEntity__Array>(get_class());
        }
    } // namespace SandWormEntity__Array
} // namespace app::classes::types
