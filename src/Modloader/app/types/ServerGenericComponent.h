#pragma once
#include <Modloader/app/structs/ServerGenericComponent.h>
#include <Modloader/app/structs/ServerGenericComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerGenericComponent {
        inline app::ServerGenericComponent__Class** type_info() {
            static app::ServerGenericComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerGenericComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerGenericComponent__Class* get_class() {
            return il2cpp::get_class<app::ServerGenericComponent__Class>(type_info(), "", "ServerGenericComponent");
        }
        inline app::ServerGenericComponent* create() {
            return il2cpp::create_object<app::ServerGenericComponent>(get_class());
        }
    } // namespace ServerGenericComponent
} // namespace app::classes::types
