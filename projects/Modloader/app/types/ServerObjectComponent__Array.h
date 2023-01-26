#pragma once
#include <Modloader/app/structs/ServerObjectComponent__Array.h>
#include <Modloader/app/structs/ServerObjectComponent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerObjectComponent__Array {
        inline app::ServerObjectComponent__Array__Class** type_info() {
            static app::ServerObjectComponent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerObjectComponent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerObjectComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectComponent__Array__Class>(type_info(), "", "ServerObjectComponent[]");
        }
        inline app::ServerObjectComponent__Array* create() {
            return il2cpp::create_object<app::ServerObjectComponent__Array>(get_class());
        }
    } // namespace ServerObjectComponent__Array
} // namespace app::classes::types
