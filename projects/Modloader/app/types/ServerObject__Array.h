#pragma once
#include <Modloader/app/structs/ServerObject__Array.h>
#include <Modloader/app/structs/ServerObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerObject__Array {
        inline app::ServerObject__Array__Class** type_info() {
            static app::ServerObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerObject__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerObject__Array__Class* get_class() {
            return il2cpp::get_class<app::ServerObject__Array__Class>(type_info(), "", "ServerObject[]");
        }
        inline app::ServerObject__Array* create() {
            return il2cpp::create_object<app::ServerObject__Array>(get_class());
        }
    } // namespace ServerObject__Array
} // namespace app::classes::types
