#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_SandWormSquetch__Array {
        namespace {
            app::SandWormEntity_SandWormSquetch__Array__Class* type_info_ref = nullptr;
        }
        app::SandWormEntity_SandWormSquetch__Array__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_SandWormSquetch__Array__Class* get_class() {
            return il2cpp::get_class<app::SandWormEntity_SandWormSquetch__Array__Class>(type_info, "", "SandWormEntity+SandWormSquetch[]");
        }
        inline app::SandWormEntity_SandWormSquetch__Array* create() {
            return il2cpp::create_object<app::SandWormEntity_SandWormSquetch__Array>(get_class());
        }
    } // namespace SandWormEntity_SandWormSquetch__Array
} // namespace app::classes::types
