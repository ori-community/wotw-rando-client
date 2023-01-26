#pragma once
#include <Modloader/app/structs/ServerTriggeredActionData__Array.h>
#include <Modloader/app/structs/ServerTriggeredActionData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerTriggeredActionData__Array {
        inline app::ServerTriggeredActionData__Array__Class** type_info() {
            static app::ServerTriggeredActionData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerTriggeredActionData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerTriggeredActionData__Array__Class* get_class() {
            return il2cpp::get_class<app::ServerTriggeredActionData__Array__Class>(type_info(), "", "ServerTriggeredActionData[]");
        }
        inline app::ServerTriggeredActionData__Array* create() {
            return il2cpp::create_object<app::ServerTriggeredActionData__Array>(get_class());
        }
    } // namespace ServerTriggeredActionData__Array
} // namespace app::classes::types
